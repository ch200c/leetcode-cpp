#pragma once
#include "leetcode-cpp/common.h" // LEETCODE_CPP_API
#include <vector>                // std::vector

namespace leetcode {
namespace p2 {

struct ListNode;

class LEETCODE_CPP_API Solution {
public:
  // Creates a node list from digits and returns its root.
  // Allocates new memory.
  static ListNode *to_list(const std::vector<int> &digits) noexcept;
  // Frees memory
  static void delete_list(ListNode *root) noexcept;
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) const noexcept;
};
} // namespace p2
} // namespace leetcode
