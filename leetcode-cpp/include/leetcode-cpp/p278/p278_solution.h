#pragma once

#include "leetcode-cpp/common.h" // LEETCODE_CPP_API
#include <string>
namespace leetcode {
namespace p278 {

class LEETCODE_CPP_API Solution {
public:
  Solution(int first_bad_version);
  int firstBadVersion(int n) const noexcept;
  bool isBadVersion(int version) const noexcept;
private:
  int _first_bad_version{-1};
};

} // namespace p278
} // namespace leetcode
