#include "pch.h"

#include "leetcode-cpp/p387/p387_solution.h"

namespace leetcode {
namespace p387 {

// Runtime: 160 ms (16.17 %)
// Memory Usage: 9.9 MB
int Solution::firstUniqChar(const std::string &s) const noexcept {

  auto letter_to_index{std::unordered_map<char, int>()};

  for (auto i{0}; i < s.size(); ++i) {
    if (letter_to_index.find(s[i]) != letter_to_index.cend()) {
      ++letter_to_index[s[i]];
    } else {
      letter_to_index[s[i]] = 1;
    }
  }

  for (auto i{0}; i < s.size(); ++i) {
    if (letter_to_index[s[i]] == 1) {
      return i;
    }
  }
  return -1;
}

} // namespace p387
} // namespace leetcode
