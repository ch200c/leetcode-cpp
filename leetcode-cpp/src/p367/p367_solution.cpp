#include "pch.h"

#include "leetcode-cpp\p367/p367_solution.h"

namespace leetcode {
namespace p367 {

// Runtime: 0 ms (100.00 %)
// Memory Usage: 5.9 MB
bool Solution::isPerfectSquare(int num) const noexcept {

  unsigned long long i{0};
  unsigned long long square{i * i};
  for (; square < num; ++i) {
    square = i * i;
  }

  return square == num;
}
} // namespace p367
} // namespace leetcode
