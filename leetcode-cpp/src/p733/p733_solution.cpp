#include "pch.h"

#include "leetcode-cpp/p733/p733_solution.h"

namespace leetcode {
namespace p733 {

// Runtime: 16 ms (93.47 %)
// Memory Usage: 13.9 MB
std::vector<std::vector<int>>
Solution::floodFill(std::vector<std::vector<int>> &image, int sr, int sc,
                    int newColor) const noexcept {
  auto old_color{image[sr][sc]};

  if (newColor == old_color) {
    return image;
  } else {
    fill(sr, sc, image, old_color, newColor);
    return image;
  }
}

void Solution::fill(int row, int col, std::vector<std::vector<int>> &image,
                    int old_color, int new_color) const noexcept {

  if (row < 0 || row >= image.size() || col < 0 || col >= image[row].size() ||
      image[row][col] != old_color) {
    return;
  }

  image[row][col] = new_color;

  fill(row + 1, col, image, old_color, new_color);
  fill(row - 1, col, image, old_color, new_color);
  fill(row, col + 1, image, old_color, new_color);
  fill(row, col - 1, image, old_color, new_color);
}

} // namespace p733

} // namespace leetcode
