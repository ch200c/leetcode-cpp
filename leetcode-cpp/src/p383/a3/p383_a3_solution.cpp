#include "pch.h"
#include "leetcode-cpp/p383/a3/p383_a3_solution.h"

namespace leetcode {
namespace p383 {
namespace a3 {
// Runtime: 72 ms (8.68 %)
// Memory Usage: 8.3 MB
bool Solution::canConstruct(const std::string &ransomNote,
                            const std::string &magazine) const noexcept {

  auto letter_to_count{std::unordered_map<char, int>()};
  for (const auto &letter : magazine) {
    if (letter_to_count.find(letter) != letter_to_count.cend()) {
      ++letter_to_count[letter];
    } else {
      letter_to_count[letter] = 1;
    }
  }

  for (const auto &letter : ransomNote) {
    if (letter_to_count.find(letter) != letter_to_count.cend()) {
      if (!letter_to_count[letter]) {
        return false;
      } else {
        --letter_to_count[letter];
      }
    } else {
      return false;
    }
  }

  return true;
}
} // namespace a3
} // namespace p383
} // namespace leetcode