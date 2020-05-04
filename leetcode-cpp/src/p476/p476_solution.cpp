#include "pch.h"

#include "leetcode-cpp/p476/p476_solution.h"
#include <bitset>

namespace leetcode {
namespace p476 {

// Runtime: 0 ms
// Memory Usage: 5.9 MB
int Solution::findComplement(int num) const noexcept {

  auto mask{std::bitset<32>()};
  mask.set(); // (2^32)-1

  // Shift the ones to the left, until the mask no longer overlaps
  while (mask.to_ulong() & num) {
    mask <<= 1;
  }

  return ~mask.to_ulong() & ~num;
}
} // namespace p476
} // namespace leetcode