#include "pch.h"
#include "leetcode-cpp/p383/a1/p383_a1_solution.h"

namespace leetcode {
namespace p383 {
namespace a1 {

// Runtime: 60 ms (16.15 %)
// Memory Usage: 8.9 MB
bool Solution::canConstruct(const std::string &ransomNote,
                            std::string magazine) const noexcept {

  for (const auto &letter : ransomNote) {
    auto it{std::find(magazine.cbegin(), magazine.cend(), letter)};
    if (it == magazine.cend()) {
      return false;
    } else {
      magazine.erase(it);
    }
  }

  return true;
}
} // namespace a1
} // namespace p383
} // namespace leetcode