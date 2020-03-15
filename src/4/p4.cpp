#include "catch2/catch.hpp"
#include "leetcode-cpp/common.h"
#include <algorithm>
#include <numeric>
#include <unordered_set>
#include <vector>
namespace p4 {
class Solution {
public:
  double findMedianSortedArrays(const std::vector<int> &nums1,
                                const std::vector<int> &nums2) const noexcept {
    return 0;
  }
};
} // namespace p4

TEST_CASE("Problem 4") {
  if (enable_problem_4_tests) {
    p4::Solution solution;
    auto epsilon{0.001};
    REQUIRE(std::abs(2.0 - solution.findMedianSortedArrays(
                               std::vector<int>{1, 2, 3},
                               std::vector<int>{1, 2, 3})) <= epsilon);
  }
}