#include "pch.h"

#include "leetcode-cpp/p993/p993_tree_node.h"
#include "leetcode-cpp\p993\p993_solution.h"

namespace leetcode {
namespace p993 {

// Runtime: 4 ms
// Memory Usage: 11.3 MB
bool Solution::isCousins(TreeNode *root, int x, int y) const noexcept {
  auto x_node{find(x, 0, root, nullptr)};
  auto y_node{find(y, 0, root, nullptr)};
  return std::get<1>(x_node) == std::get<1>(y_node) &&
         std::get<2>(x_node) != std::get<2>(y_node);
}

std::tuple<TreeNode *, int, TreeNode *>
Solution::find(int value, int depth, TreeNode *node,
               TreeNode *parent_node) const noexcept {
  if (!node) {
    return std::make_tuple(nullptr, depth, parent_node);
  }
  if (node->val == value) {
    return std::make_tuple(node, depth, parent_node);
  }

  auto left{find(value, depth + 1, node->left, node)};
  if (std::get<0>(left)) {
    return left;
  }

  return find(value, depth + 1, node->right, node);
}

} // namespace p993
} // namespace leetcode
