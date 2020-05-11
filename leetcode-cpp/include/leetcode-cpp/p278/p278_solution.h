#pragma once
#include "leetcode-cpp/common.h" // LEETCODE_CPP_API

namespace leetcode {
namespace p278 {

class LEETCODE_CPP_API Solution {
public:
  Solution(int first_bad_version);
  int firstBadVersion(int n) const noexcept;

private:
  // Fake interactive API
  bool isBadVersion(int version) const noexcept;
  int _first_bad_version{-1};
};
} // namespace p278
} // namespace leetcode
