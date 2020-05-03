#pragma once
#include "leetcode-cpp/common.h" // LEETCODE_CPP_API
#include <vector>                // std::vector

namespace leetcode {
namespace p1431 {

class LEETCODE_CPP_API Solution {
public:
  std::vector<bool> kidsWithCandies(std::vector<int> &candies,
                                    int extraCandies) const noexcept;
};
} // namespace p1431
} // namespace leetcode
