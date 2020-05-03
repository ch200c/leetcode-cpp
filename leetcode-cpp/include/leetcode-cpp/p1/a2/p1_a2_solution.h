#pragma once
#include "leetcode-cpp/common.h" // LEETCODE_CPP_API
#include <vector>                // std::vector

namespace leetcode {
namespace p1 {
namespace a2 {
class LEETCODE_CPP_API Solution {
public:
  std::vector<int> twoSum(const std::vector<int> &nums, int target) const
      noexcept;
};
} // namespace a2
} // namespace p1
} // namespace leetcode
