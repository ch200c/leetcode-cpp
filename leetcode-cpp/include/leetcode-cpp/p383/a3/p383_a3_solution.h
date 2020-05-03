#pragma once
#include "leetcode-cpp/common.h" // LEETCODE_CPP_API
#include <string>                // std::string

namespace leetcode {
namespace p383 {
namespace a3 {
class LEETCODE_CPP_API Solution {
public:
  bool canConstruct(const std::string &ransomNote,
                    const std::string &magazine) const noexcept;
};
} // namespace a3
} // namespace p383
} // namespace leetcode
