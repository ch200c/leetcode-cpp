#pragma once
#include "leetcode-cpp/common.h" // LEETCODE_CPP_API
#include <string>                // std::string

namespace leetcode {
namespace p383 {
namespace a1 {
class LEETCODE_CPP_API Solution {
public:
  bool canConstruct(const std::string &ransomNote, std::string magazine) const
      noexcept;
};
} // namespace a1
} // namespace p383
} // namespace leetcode
