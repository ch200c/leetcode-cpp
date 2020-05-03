#pragma once
#include <vector> // std::vector
#include "leetcode-cpp/common.h"    // LEETCODE_CPP_API
#include "leetcode-cpp/p2/p2_list_node.h"   // ListNode
namespace leetcode
{
    namespace p2
    {
        class LEETCODE_CPP_API Solution {
        public:
            // Creates a node list from digits and returns its root
            static ListNode* to_list(const std::vector<int>& digits) noexcept;
            ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) const noexcept;
        };
    }
}
