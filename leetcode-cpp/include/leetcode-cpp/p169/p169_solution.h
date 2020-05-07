#pragma once
#include "leetcode-cpp/common.h" // LEETCODE_CPP_API
#include <vector>                // std::vector

namespace leetcode {
namespace p169 {
class LEETCODE_CPP_API Solution {
public:
  int majorityElement(const std::vector<int> &nums) const noexcept;
};
} // namespace p169
} // namespace leetcode
