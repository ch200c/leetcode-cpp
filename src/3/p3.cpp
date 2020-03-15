#include "catch2/catch.hpp"
#include "leetcode-cpp/common.h"
#include <unordered_map> // std::unordered_map

namespace p3 {
class Solution {
public:
  // Runtime: 20 ms, faster than 63.39% of C++ online submissions for Longest
  // Substring Without Repeating Characters.
  // Memory Usage: 10 MB, less than 73.13% of C++ online submissions for Longest
  // Substring Without Repeating Characters.
  int lengthOfLongestSubstring(const std::string &s) const noexcept {

    std::unordered_map<char, int> letter_to_last_index;
    auto substring_start_index{0};
    auto max_substring_length{0};
    const auto size{s.size()};

    for (auto i{0}; i < size; ++i) {
      if (letter_to_last_index.find(s[i]) != letter_to_last_index.cend() &&
          letter_to_last_index[s[i]] >= substring_start_index) {
        substring_start_index = letter_to_last_index[s[i]] + 1;
      }

      max_substring_length =
          std::max(max_substring_length, i - substring_start_index + 1);

      letter_to_last_index[s[i]] = i;
    }

    return max_substring_length;
  }
};
} // namespace p3

TEST_CASE("Problem 3") {
  if (enable_problem_3_tests) {
    p3::Solution solution;
    REQUIRE(solution.lengthOfLongestSubstring("aab") == 2);
    REQUIRE(solution.lengthOfLongestSubstring("abba") == 2);
    REQUIRE(solution.lengthOfLongestSubstring("au") == 2);
    REQUIRE(solution.lengthOfLongestSubstring("") == 0);
    REQUIRE(solution.lengthOfLongestSubstring("abcabcbb") == 3);
    REQUIRE(solution.lengthOfLongestSubstring("bbbbb") == 1);
    REQUIRE(solution.lengthOfLongestSubstring("pwwkew") == 3);
  }
}