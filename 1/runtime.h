#pragma once
#include <unordered_map> // std::unordered_map
#include <vector>        // std::vector

namespace problem_1_runtime {
class Solution {
public:
  std::vector<int> twoSum(const std::vector<int> &nums, int target) const
      noexcept {
    std::unordered_map<int, int> valueToIndex;

    const auto size{nums.size()};

    for (auto i{0}; i < size; ++i) {

      auto otherValue{target - nums[i]};

      if (valueToIndex.find(otherValue) != valueToIndex.cend()) {
        return std::vector<int>{valueToIndex[otherValue], i};
      }

      valueToIndex[nums[i]] = i;
    }

    return std::vector<int>{};
  }
};
} // namespace problem1
