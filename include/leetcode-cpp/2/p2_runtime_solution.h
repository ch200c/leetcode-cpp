#pragma once
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
  static ListNode *to_list(const std::vector<int> &digits) noexcept;
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) const noexcept;
};
} // namespace p2_runtime
