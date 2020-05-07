#pragma once
#include "leetcode-cpp/common.h" // LEETCODE_CPP_API
#include <tuple>                 // std::tuple

namespace leetcode {
namespace p993 {

struct TreeNode;

class LEETCODE_CPP_API Solution {
public:
  bool isCousins(TreeNode *root, int x, int y) const noexcept;
  std::tuple<TreeNode *, int, TreeNode *>
  find(int value, int depth, TreeNode *node, TreeNode *parent_node) const
      noexcept;
};
} // namespace p993
} // namespace leetcode
