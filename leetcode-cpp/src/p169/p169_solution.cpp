#include "pch.h"

#include "leetcode-cpp\p169\p169_solution.h"

namespace leetcode {
namespace p169 {

// Runtime: 52 ms (16.28 %)
// Memory Usage: 20 MB
int Solution::majorityElement(const std::vector<int> &nums) const noexcept {

  auto number_to_count{std::unordered_map<int, int>()};
  auto max_count{std::numeric_limits<int>::min()};
  auto majority_num{0};

  for (const auto &number : nums) {
    if (number_to_count.find(number) != number_to_count.cend()) {
      ++number_to_count[number];
    } else {
      number_to_count[number] = 1;
    }

    if (number_to_count[number] > max_count) {
      max_count = number_to_count[number];
      majority_num = number;
    }
  }

  return majority_num;
}

} // namespace p169
} // namespace leetcode
