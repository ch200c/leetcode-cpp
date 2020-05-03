#include "pch.h"
#include "leetcode-cpp/p1/a1/p1_a1_solution.h"

namespace leetcode {
namespace p1 {
namespace a1 {

// Runtime: 148 ms (24.68%)
// Memory Usage: 8.7 MB (100.00%)
std::vector<int> Solution::twoSum(const std::vector<int> &nums,
                                  int target) const noexcept {
  const auto size{nums.size()};

  for (auto i{0}; i < size; ++i) {
    for (auto j{i + 1}; j < size; ++j) {
      if (nums[i] + nums[j] == target) {
        return std::vector<int>{i, j};
      }
    }
  }

  return std::vector<int>{};
}
} // namespace a1
} // namespace p1
} // namespace leetcode