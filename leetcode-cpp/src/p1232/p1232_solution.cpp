#include "pch.h"

#include "leetcode-cpp\p1232\p1232_solution.h"

namespace leetcode {
namespace p1232 {

// Runtime: 16 ms (26.14 %)
// Memory Usage: 10 MB
bool Solution::checkStraightLine(
    const std::vector<std::vector<int>> &coordinates) const noexcept {

  auto x_diff{coordinates[1][0] - coordinates[0][0]};
  auto y_diff{coordinates[1][1] - coordinates[0][1]};
  auto slope{static_cast<double>(y_diff) / x_diff};
  auto epsilon{0.001};

  for (auto i{2}; i < coordinates.size(); ++i) {

    // y − y1 = m(x − x1), where x1, y1 is a known point
    // y = coordinates[0][1] + slope * (x - coordinates[0][0])

    auto y{coordinates[0][1] + slope * (static_cast<double>(coordinates[i][0]) -
                                        coordinates[0][0])};

    if (std::abs(y - coordinates[i][1]) > epsilon) {
      return false;
    }
  }

  return true;
}

} // namespace p1232
} // namespace leetcode
