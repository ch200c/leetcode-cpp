#pragma once
#include "leetcode-cpp/common.h" // LEETCODE_CPP_API
#include <vector>                // std::vector

namespace leetcode {

namespace p78 {
class LEETCODE_CPP_API Solution {
public:
  std::vector<std::vector<int>> subsets(const std::vector<int> &nums) const
      noexcept;
};
} // namespace p78

} // namespace leetcode
