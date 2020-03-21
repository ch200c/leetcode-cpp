#include "leetcode-cpp/1/p1_simple_solution.h"
#include "catch2/catch.hpp"
#include <vector> // std::vector

namespace p1_simple {

// Runtime: 148 ms, faster than 24.68% of C++ online submissions for Two Sum.
// Memory Usage: 8.7 MB, less than 100.00% of C++ online submissions for Two
// Sum.
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

} // namespace p1_simple
