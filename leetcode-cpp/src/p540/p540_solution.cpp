#include "pch.h"

#include "leetcode-cpp/p540/p540_solution.h"

namespace leetcode {
namespace p540 {

// Runtime: 12 ms (47.40 %)
// Memory Usage : 11.1 MB
int Solution::singleNonDuplicate(const std::vector<int> &nums) const noexcept {

  unsigned long long left_index{0};
  unsigned long long right_index{nums.size() - 1};

  while (left_index < right_index) {

    auto middle_index{left_index + (right_index - left_index) / 2};

    if ((middle_index % 2 == 0 &&
         nums[middle_index] == nums[middle_index + 1]) ||
        (middle_index % 2 == 1 &&
         nums[middle_index] == nums[middle_index - 1])) {
      left_index = middle_index + 1;
    } else {
      right_index = middle_index;
    }
  }
  return nums[left_index];
}
} // namespace p540

} // namespace leetcode
