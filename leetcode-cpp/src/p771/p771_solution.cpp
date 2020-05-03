#include "pch.h"
#include "leetcode-cpp/p771/p771_solution.h"


namespace leetcode {
namespace p771 {
// Runtime: 8 ms
// Memory Usage: 6 MB
int Solution::numJewelsInStones(const std::string &J,
                                const std::string &S) const noexcept {
  std::ptrdiff_t sum{0}; // C4244
  for (const auto &jewel : J) {
    sum += std::count(S.cbegin(), S.cend(), jewel);
  }
  return static_cast<int>(sum);
}
} // namespace p771
} // namespace leetcode