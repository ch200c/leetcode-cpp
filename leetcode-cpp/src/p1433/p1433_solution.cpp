#include "pch.h"

#include "leetcode-cpp/p1433/p1433_solution.h"

namespace leetcode {
namespace p1433 {
// Runtime: 628 ms (55.81 %)
// Memory Usage : 11.6 MB
bool Solution::checkIfCanBreak(std::string s1, std::string s2) const noexcept {
  std::sort(s1.begin(), s1.end());
  std::sort(s2.begin(), s2.end());

  auto size{s1.size()};
  auto can_break{true};
  for (auto i{0}; i < size; ++i) {
    if (s1[i] > s2[i]) {
      can_break = false;
      break;
    }
  }

  auto can_break2{true};
  for (auto i{0}; i < size; ++i) {
    if (s2[i] > s1[i]) {
      can_break2 = false;
      break;
    }
  }

  return can_break || can_break2;
}
} // namespace p1433
} // namespace leetcode