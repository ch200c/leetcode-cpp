#pragma once
#include "leetcode-cpp/common.h" // LEETCODE_CPP_API

namespace leetcode {
namespace p993 {
struct LEETCODE_CPP_API TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

} // namespace p993
} // namespace leetcode
