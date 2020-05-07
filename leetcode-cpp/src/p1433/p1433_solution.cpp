#include "pch.h"

#include "leetcode-cpp/p1433/p1433_solution.h"

namespace leetcode {
namespace p1433 {

//Runtime: 400 ms (65.84 %)
//Memory Usage: 11.5 MB
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

  if (can_break) {
    return true;
  }

  can_break = true;

  for (auto i{0}; i < size; ++i) {
    if (s2[i] > s1[i]) {
      can_break = false;
      break;
    }
  }

  return can_break;
}
} // namespace p1433
} // namespace leetcode