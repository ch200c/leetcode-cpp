#include "catch2/catch.hpp"
#include "leetcode-cpp/common.h"
#include <unordered_set> // std::unordered_set

namespace p3_simple {
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
} // namespace p3_simple

TEST_CASE("Problem 3 (Simple)") {
  if (enable_problem_3_tests) {
    p3_simple::Solution solution;
    REQUIRE(solution.lengthOfLongestSubstring("aab") == 2);
    REQUIRE(solution.lengthOfLongestSubstring("abba") == 2);
    REQUIRE(solution.lengthOfLongestSubstring("au") == 2);
    REQUIRE(solution.lengthOfLongestSubstring("") == 0);
    REQUIRE(solution.lengthOfLongestSubstring("abcabcbb") == 3);
    REQUIRE(solution.lengthOfLongestSubstring("bbbbb") == 1);
    REQUIRE(solution.lengthOfLongestSubstring("pwwkew") == 3);
  }
}