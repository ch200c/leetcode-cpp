#include "pch.h"

#include "leetcode-cpp/p997/p997_solution.h"
namespace leetcode {
namespace p997 {

// Runtime: 348 ms (26.30 %)
// Memory Usage: 60.9 MB
int Solution::findJudge(int N, const std::vector<std::vector<int>> &trust) const
    noexcept {

  auto people{std::vector<int>(N, 0)};
  auto judges{std::vector<int>(N, 0)};

  for (const auto &t : trust) {
    ++people[t[0] - 1];
    ++judges[t[1] - 1];
  }

  for (auto i{0}; i < N; ++i) {
    if (!people[i] && judges[i] == N - 1) {
      return i + 1;
    }
  }

  return -1;
}

} // namespace p997
} // namespace leetcode
