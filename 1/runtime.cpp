#include "runtime.h"
#include "catch2/catch.hpp"
#include <algorithm> // std::find
#include <vector>    // std::vector

TEST_CASE("Problem 1 (Runtime)") {
  problem_1_runtime::Solution solution;
  auto result{solution.twoSum(std::vector<int>{2, 7, 11, 15}, 9)};

  REQUIRE(std::find(result.cbegin(), result.cend(), 0) != result.cend());
  REQUIRE(std::find(result.cbegin(), result.cend(), 1) != result.cend());
}