#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "leetcode-cpp/1/p1_runtime_solution.h"
#include "leetcode-cpp/1/p1_simple_solution.h"
#include "leetcode-cpp/2/p2_runtime_solution.h"
#include "leetcode-cpp/3/p3_runtime_solution.h"
#include "leetcode-cpp/3/p3_simple_solution.h"
#include "leetcode-cpp/4/p4_simple_solution.h"
#include <algorithm> // std::find
#include <cmath>     // std::abs

TEST_CASE("Problem 1") {

  auto input_nums{std::vector<int>{2, 7, 11, 15}};
  auto input_target{9};
  auto output_indices{std::vector<int>{0, 1}};

  SECTION("Simple Solution") {
    p1_simple::Solution solution;
    auto result_indices{solution.twoSum(input_nums, input_target)};
    for (const auto &index : output_indices) {
      REQUIRE(std::find(result_indices.cbegin(), result_indices.cend(),
                        index) != result_indices.cend());
    }
  }

  SECTION("Runtime Efficient Solution") {
    p1_runtime::Solution solution;
    auto result_indices{solution.twoSum(input_nums, input_target)};
    for (const auto &index : output_indices) {
      REQUIRE(std::find(result_indices.cbegin(), result_indices.cend(),
                        index) != result_indices.cend());
    }
  }
}

TEST_CASE("Problem 2") {

  p2_runtime::Solution solution;

  auto root_node1{p2_runtime::Solution::to_list(std::vector<int>{2, 4, 3})};
  auto root_node2{p2_runtime::Solution::to_list(std::vector<int>{5, 6, 4})};
  auto result{solution.addTwoNumbers(root_node1, root_node2)};

  REQUIRE(result->val == 7);
  REQUIRE(result->next->val == 0);
  REQUIRE(result->next->next->val == 8);

  root_node1 = p2_runtime::Solution::to_list(std::vector<int>{1, 8});
  root_node2 = p2_runtime::Solution::to_list(std::vector<int>{0});
  result = solution.addTwoNumbers(root_node1, root_node2);

  REQUIRE(result->val == 1);
  REQUIRE(result->next->val == 8);
}

TEST_CASE("Problem 3") {

  SECTION("Simple Solution") {
    p3_simple::Solution solution;
    REQUIRE(solution.lengthOfLongestSubstring("aab") == 2);
    REQUIRE(solution.lengthOfLongestSubstring("abba") == 2);
    REQUIRE(solution.lengthOfLongestSubstring("au") == 2);
    REQUIRE(solution.lengthOfLongestSubstring("") == 0);
    REQUIRE(solution.lengthOfLongestSubstring("abcabcbb") == 3);
    REQUIRE(solution.lengthOfLongestSubstring("bbbbb") == 1);
    REQUIRE(solution.lengthOfLongestSubstring("pwwkew") == 3);
  }

  SECTION("Runtime Efficient Solution") {
    p3_runtime::Solution solution;
    REQUIRE(solution.lengthOfLongestSubstring("aab") == 2);
    REQUIRE(solution.lengthOfLongestSubstring("abba") == 2);
    REQUIRE(solution.lengthOfLongestSubstring("au") == 2);
    REQUIRE(solution.lengthOfLongestSubstring("") == 0);
    REQUIRE(solution.lengthOfLongestSubstring("abcabcbb") == 3);
    REQUIRE(solution.lengthOfLongestSubstring("bbbbb") == 1);
    REQUIRE(solution.lengthOfLongestSubstring("pwwkew") == 3);
  }
}

TEST_CASE("Problem 4") {

  p4_simple::Solution solution;
  auto epsilon{0.001};

  REQUIRE(std::abs(2.0 - solution.findMedianSortedArrays(
                             std::vector<int>{1, 3}, std::vector<int>{2})) <=
          epsilon);

      REQUIRE(std::abs(-1.0 - solution.findMedianSortedArrays(
                              std::vector<int>{3}, std::vector<int>{-2, -1})) <=
          epsilon);


  REQUIRE(std::abs(2.5 - solution.findMedianSortedArrays(
                             std::vector<int>{1, 2}, std::vector<int>{3, 4})) <=
          epsilon);

  REQUIRE(std::abs(1.0 - solution.findMedianSortedArrays(std::vector<int>{1},
                                                         std::vector<int>{})) <=
          epsilon);


  REQUIRE(std::abs(1.0 - solution.findMedianSortedArrays(
                             std::vector<int>{}, std::vector<int>{1})) <=
          epsilon);

  REQUIRE(std::abs(2.5 - solution.findMedianSortedArrays(
                             std::vector<int>{}, std::vector<int>{2, 3})) <=
          epsilon);

  REQUIRE(std::abs(3.5 - solution.findMedianSortedArrays(std::vector<int>{3, 4},
                                                         std::vector<int>{})) <=
          epsilon);


}