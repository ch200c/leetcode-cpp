#pragma once
#include "leetcode-cpp/common.h" // LEETCODE_CPP_API
#include <vector>                // std::vector

namespace leetcode {
namespace p1232 {
class LEETCODE_CPP_API Solution {
public:
  bool checkStraightLine(const std::vector<std::vector<int>> &coordinates) const
      noexcept;
};
} // namespace p1232
} // namespace leetcode
