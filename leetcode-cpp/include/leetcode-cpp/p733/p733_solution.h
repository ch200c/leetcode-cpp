#pragma once
#include "leetcode-cpp/common.h" // LEETCODE_CPP_API
#include <vector>                // std::vector

namespace leetcode {
namespace p733 {

class LEETCODE_CPP_API Solution {
public:
  std::vector<std::vector<int>> floodFill(std::vector<std::vector<int>> &image,
                                          int sr, int sc, int newColor) const
      noexcept;

private:
  void fill(int row, int col, std::vector<std::vector<int>> &image,
            int old_color, int new_color) const noexcept;
};
} // namespace p733
} // namespace leetcode
