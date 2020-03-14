#include "catch2/catch.hpp"
#include "leetcode-cpp/common.h"
#include <vector> // std::vector

namespace p2_runtime {

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  // Creates a node list from digits and returns its root
  static ListNode *to_list(const std::vector<int> &digits) noexcept {

    ListNode *root_node{nullptr};
    ListNode *previous_node{nullptr};

    for (const auto &digit : digits) {

      auto new_node{new ListNode(digit)};

      if (previous_node) {
        previous_node->next = new_node;
      } else {
        root_node = new_node;
      }
      previous_node = new_node;
    }

    return root_node;
  }

  // Runtime: 20 ms, faster than 98.02% of C++ online submissions for Add Two
  // Numbers. Memory Usage: 11.6 MB, less than 5.14% of C++ online submissions
  // for Add Two Numbers.
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) const noexcept {

    std::vector<int> result_digits;
    ListNode *current_node_1{l1};
    ListNode *current_node_2{l2};
    auto carry{0};

    while (current_node_1 || current_node_2) {

      auto value_1{current_node_1 ? current_node_1->val : 0};
      auto value_2{current_node_2 ? current_node_2->val : 0};

      auto sum{value_1 + value_2 + carry};
      auto division_result{std::div(sum, 10)};
      result_digits.push_back(division_result.rem);
      carry = division_result.quot;

      if (current_node_1) {
        current_node_1 = current_node_1->next;
      }

      if (current_node_2) {
        current_node_2 = current_node_2->next;
      }
    }

    if (carry) {
      result_digits.push_back(carry);
    }

    return to_list(result_digits);
  }
};
} // namespace p2_runtime

TEST_CASE("Problem 2") {
  if (enable_problem_2_tests) {
    p2_runtime::Solution solution;

    auto root_node_1{p2_runtime::Solution::to_list(std::vector<int>{2, 4, 3})};
    auto root_node_2{p2_runtime::Solution::to_list(std::vector<int>{5, 6, 4})};
    auto result{solution.addTwoNumbers(root_node_1, root_node_2)};

    REQUIRE(result->val == 7);
    REQUIRE(result->next->val == 0);
    REQUIRE(result->next->next->val == 8);

    root_node_1 = p2_runtime::Solution::to_list(std::vector<int>{1, 8});
    root_node_2 = p2_runtime::Solution::to_list(std::vector<int>{0});
    result = solution.addTwoNumbers(root_node_1, root_node_2);

    REQUIRE(result->val == 1);
    REQUIRE(result->next->val == 8);
  }
}