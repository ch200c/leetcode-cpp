#include "pch.h"
#include "leetcode-cpp/p3/a1/p3_a1_solution.h"

namespace leetcode {
namespace p3 {
namespace a1 {

// Runtime: 808 ms (6.97%)
// Memory Usage: 231.6 MB (7.46%)
int Solution::lengthOfLongestSubstring(const std::string &s) const noexcept {

  std::vector<int> counts;
  const auto size{s.size()};

  for (auto i{0}; i < size; ++i) {

    std::unordered_set<char> substring;

    for (auto j{i}; j < size; ++j) {
      if (substring.find(s[j]) == substring.cend()) {
        substring.insert(s[j]);
      } else {
        break;
      }
    }

    counts.push_back(static_cast<int>(substring.size()));
  }

  return s.empty() ? 0 : *std::max_element(counts.cbegin(), counts.cend());
}

} // namespace a1
} // namespace p3
} // namespace leetcode