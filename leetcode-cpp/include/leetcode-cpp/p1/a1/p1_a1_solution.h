#pragma once
#include "leetcode-cpp/common.h" // LEETCODE_CPP_API
#include <vector>                // std::vector

namespace leetcode {
namespace p1 {
namespace a1 {
class LEETCODE_CPP_API Solution {
public:
  std::vector<int> twoSum(const std::vector<int> &nums, int target) const
      noexcept;
};
} // namespace a1
} // namespace p1
} // namespace leetcode