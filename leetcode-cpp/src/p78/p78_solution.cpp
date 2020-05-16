#include "pch.h"

#include "leetcode-cpp/p78/p78_solution.h"

namespace leetcode {
namespace p78 {

// Runtime: 4 ms (88.77 %)
// Memory Usage: 7.2 MB
std::vector<std::vector<int>>
Solution::subsets(const std::vector<int> &nums) const noexcept {

  auto subsets{std::vector<std::vector<int>>()};
  const auto nums_size{nums.size()};
  // An arbitrary number, has to be larger than nums_size
  constexpr auto mask_size{32};

  for (auto i{0}; i < 1 << nums_size; ++i) {
    // Use only the relevant bits without zero padding
    auto mask{
        std::bitset<mask_size>(i).to_string().substr(mask_size - nums_size)};

    auto subset{std::vector<int>()};
    for (auto j{0}; j < nums_size; ++j) {
      if (mask[j] == '1') {
        subset.push_back(nums[j]);
      }
    }
    subsets.push_back(subset);
  }

  return subsets;
}
} // namespace p78

} // namespace leetcode
