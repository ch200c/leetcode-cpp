#include "catch2/catch.hpp"
#include <algorithm>     // std::find
#include <unordered_set> // std::unordered_set
#include <vector>        // std::vector

namespace p1_runtime {
class Solution {
public:
  // Runtime: 8 ms, faster than 93.09% of C++ online submissions for Two Sum.
  // Memory Usage: 9.3 MB, less than 78.47% of C++ online submissions for Two
  // Sum.
  std::vector<int> twoSum(const std::vector<int> &nums, int target) const
      noexcept {

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
};
} // namespace p1_runtime

TEST_CASE("Problem 1 (Runtime)") {
  p1_runtime::Solution solution;
  auto result{solution.twoSum(std::vector<int>{2, 7, 11, 15}, 9)};

  REQUIRE(std::find(result.cbegin(), result.cend(), 0) != result.cend());
  REQUIRE(std::find(result.cbegin(), result.cend(), 1) != result.cend());
}