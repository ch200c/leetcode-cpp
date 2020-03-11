#include "catch2/catch.hpp"
#include <algorithm> // std::find
#include <vector>    // std::vector

namespace problem_1_memory {
class Solution {
public:
  // Runtime: 148 ms, faster than 24.68% of C++ online submissions for Two Sum.
  // Memory Usage: 8.7 MB, less than 100.00% of C++ online submissions for Two
  // Sum.
  std::vector<int> twoSum(const std::vector<int> &nums, int target) const
      noexcept {

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
};
} // namespace problem_1_memory

TEST_CASE("Problem 1 (Memory Usage)") {
  problem_1_memory::Solution solution;
  auto result{solution.twoSum(std::vector<int>{2, 7, 11, 15}, 9)};

  REQUIRE(std::find(result.cbegin(), result.cend(), 0) != result.cend());
  REQUIRE(std::find(result.cbegin(), result.cend(), 1) != result.cend());
}