#include "pch.h"

#include "leetcode-cpp/p387/p387_solution.h"

namespace leetcode {
namespace p387 {

// Runtime: 124 ms (23.61 %)
// Memory Usage: 11 MB
int Solution::firstUniqChar(const std::string &s) const noexcept {

  auto letter_to_index{std::unordered_map<char, int>()};

  for (auto i{0}; i < s.size(); ++i) {
    if (letter_to_index.find(s[i]) != letter_to_index.cend()) {
      letter_to_index[s[i]] = -1;
    } else {
      letter_to_index[s[i]] = i;
    }
  }

  auto lowest_index{std::numeric_limits<int>::max()};
  for (const auto &entry : letter_to_index) {
    if (entry.second != -1) {
      lowest_index = std::min(lowest_index, entry.second);
    }
  }

  return lowest_index == std::numeric_limits<int>::max() ? -1 : lowest_index;
}

} // namespace p387
} // namespace leetcode
