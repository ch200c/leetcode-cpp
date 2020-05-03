#include "pch.h"
#include "leetcode-cpp/p2/p2_solution.h"

namespace leetcode {
namespace p2 {

ListNode *Solution::to_list(const std::vector<int> &digits) noexcept {

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

// Runtime: 20 ms (98.02%)
// Memory Usage: 11.6 MB (5.14%)
ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2) const noexcept {

  std::vector<int> result_digits;
  ListNode *current_node1{l1};
  ListNode *current_node2{l2};
  auto carry{0};

  while (current_node1 || current_node2) {

    auto value1{current_node1 ? current_node1->val : 0};
    auto value2{current_node2 ? current_node2->val : 0};

    auto sum{value1 + value2 + carry};
    auto division_result{std::div(sum, 10)};
    result_digits.push_back(division_result.rem);
    carry = division_result.quot;

    if (current_node1) {
      current_node1 = current_node1->next;
    }

    if (current_node2) {
      current_node2 = current_node2->next;
    }
  }

  if (carry) {
    result_digits.push_back(carry);
  }

  return to_list(result_digits);
}
} // namespace p2
} // namespace leetcode