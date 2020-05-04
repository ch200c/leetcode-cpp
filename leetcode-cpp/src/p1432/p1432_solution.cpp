#include "pch.h"

#include "leetcode-cpp/p1432/p1432_solution.h"

namespace leetcode {
namespace p1432 {
// Runtime: 0 ms
// Memory Usage: 6 MB
int Solution::maxDiff(int num) const noexcept {

  auto num_string{std::to_string(num)};
  auto larger{std::string(num_string)};

  auto i{num_string.find_first_not_of('9')};
  if (i != std::string::npos) {
    auto it{larger.begin()};
    std::advance(it, i);
    std::replace(it, larger.end(), num_string[i], '9');
  }

  i = 0;
  if (num_string[0] == '1') {
    i = num_string.find_first_not_of("01", 1);
  }

  auto smaller{std::string(num_string)};
  if (i != std::string::npos) {
    auto it{smaller.begin()};
    std::advance(it, i);
    std::replace(it, smaller.end(), num_string[i], !i ? '1' : '0');
  }

  for (i = 0; i < num_string.size(); ++i) {
    num_string[i] = '0' + (larger[i] - smaller[i]);
  }

  return std::stoi(num_string);
}
} // namespace p1432
} // namespace leetcode