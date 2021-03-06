#pragma once
#include "leetcode-cpp/common.h" // LEETCODE_CPP_API

namespace leetcode {
namespace p2 {
struct LEETCODE_CPP_API ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

} // namespace p2
} // namespace leetcode
