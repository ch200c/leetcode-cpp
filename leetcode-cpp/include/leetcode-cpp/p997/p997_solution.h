#pragma once
#include "leetcode-cpp/common.h" // LEETCODE_CPP_API
#include <vector>                // std::vector

namespace leetcode {
namespace p997 {
class LEETCODE_CPP_API Solution {
public:
  int findJudge(int N, const std::vector<std::vector<int>> &trust) const
      noexcept;
};
} // namespace p169
} // namespace leetcode
