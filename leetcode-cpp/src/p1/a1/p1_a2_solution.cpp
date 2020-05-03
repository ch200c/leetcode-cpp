#include "pch.h"
#include "leetcode-cpp/p1/a2/p1_a2_solution.h"

namespace leetcode {
namespace p1 {
namespace a2 {

// Runtime: 8 ms (93.09%)
// Memory Usage: 9.3 MB (78.47%)
std::vector<int> Solution::twoSum(const std::vector<int> &nums,
                                  int target) const noexcept {

  auto answer_indices{std::vector<int>(2)};

  std::unordered_set<int> values;
  auto last_other_value{0};

  const auto size{nums.size()};
  for (auto i{0}; i < size; ++i) {

    last_other_value = target - nums[i];

    if (values.find(last_other_value) == values.cend()) {
      values.insert(nums[i]);
    } else {
      answer_indices[0] = i;
      break;
    }
  }

  for (auto i{0}; i < answer_indices[0]; ++i) {
    if (last_other_value == nums[i]) {
      answer_indices[1] = i;
      break;
    }
  }

  return answer_indices;
}
} // namespace a2
} // namespace p1
} // namespace leetcode