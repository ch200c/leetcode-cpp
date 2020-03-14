#include "catch2/catch.hpp"
#include "leetcode-cpp/common.h"
#include <string>
#include <unordered_set>

namespace p3 {
class Solution {
public:
  int lengthOfLongestSubstring(const std::string &s) const noexcept {

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
};
} // namespace p3

TEST_CASE("Problem 3") {
  if (enable_problem_3_tests) {
    p3::Solution solution;
    REQUIRE(solution.lengthOfLongestSubstring("") == 0);
    REQUIRE(solution.lengthOfLongestSubstring("abcabcbb") == 3);
    REQUIRE(solution.lengthOfLongestSubstring("bbbbb") == 1);
    REQUIRE(solution.lengthOfLongestSubstring("pwwkew") == 3);
  }
}