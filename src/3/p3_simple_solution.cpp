#include "leetcode-cpp/3/p3_simple_solution.h"
#include "catch2/catch.hpp"
#include <algorithm>     // std::max_element
#include <string>        // std::string
#include <unordered_set> // std::unordered_set

namespace p3_simple {

// Runtime: 808 ms, faster than 6.97% of C++ online submissions for Longest
// Substring Without Repeating Characters.
// Memory Usage: 231.6 MB, less than 7.46% of C++ online submissions for
// Longest Substring Without Repeating Characters.
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

} // namespace p3_simple
