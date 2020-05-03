#include "pch.h"

#include "leetcode-cpp/p278/p278_solution.h"

namespace leetcode {
namespace p278 {

Solution::Solution(int first_bad_version)
    : _first_bad_version(first_bad_version) {}

// Runtime: 0 ms
// Memory Usage: 5.9 MB
int Solution::firstBadVersion(int n) const noexcept {
  auto left_index{1};
  auto right_index{n};
  auto last_good_version_index{0};

  while (left_index <= right_index) {
    auto index{left_index + (right_index - left_index) / 2};
    if (!isBadVersion(index)) {
      last_good_version_index = std::max(last_good_version_index, index);
      left_index = index + 1;
    } else {
      right_index = index - 1;
    }
  }

  return last_good_version_index + 1;
}

bool Solution::isBadVersion(int version) const noexcept {
  return version >= _first_bad_version;
}
} // namespace p278
} // namespace leetcode