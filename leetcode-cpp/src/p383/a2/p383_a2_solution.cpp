#include "pch.h"
#include "leetcode-cpp/p383/a2/p383_a2_solution.h"


namespace leetcode {
namespace p383 {
namespace a2 {
// Runtime: 148 ms
// Memory Usage: 8.9 MB
bool Solution::canConstruct(std::string ransomNote, std::string magazine) const
    noexcept {

  std::sort(ransomNote.begin(), ransomNote.end());
  std::sort(magazine.begin(), magazine.end());

  std::string intersection;
  std::set_intersection(ransomNote.begin(), ransomNote.end(), magazine.begin(),
                        magazine.end(), std::back_inserter(intersection));
  return ransomNote == intersection;
}
} // namespace a2
} // namespace p383
} // namespace leetcode