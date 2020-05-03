#include "pch.h"
#include "leetcode-cpp/p1431/p1431_solution.h"

namespace leetcode {
namespace p1431 {
// Runtime: 4 ms
// Memory Usage: 9.2 MB

std::vector<bool> Solution::kidsWithCandies(std::vector<int> &candies,
                                            int extraCandies) const noexcept {

  auto max_candy_count{std::max_element(candies.cbegin(), candies.cend())};
  std::vector<bool> output;
  for (auto i{0}; i < candies.size(); ++i) {
    if (*max_candy_count - candies[i] <= extraCandies) {
      output.push_back(true);
    } else {
      output.push_back(false);
    }
  }

  return output;
}
} // namespace p1431
} // namespace leetcode