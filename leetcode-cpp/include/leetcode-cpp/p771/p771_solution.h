#pragma once
#include "leetcode-cpp/common.h" // LEETCODE_CPP_API
#include <string>                // std::string

namespace leetcode {
namespace p771 {

class LEETCODE_CPP_API Solution {
public:
  int numJewelsInStones(const std::string &J, const std::string &S) const
      noexcept;
};
} // namespace p771
} // namespace leetcode
