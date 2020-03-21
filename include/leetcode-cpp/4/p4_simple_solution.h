#pragma once
#include <vector> // std::vector

namespace p4_simple {
class Solution {
public:
  double findMedianSortedArrays(const std::vector<int> &nums1,
                                const std::vector<int> &nums2) noexcept;

private:
  void advance_iterator() noexcept;
  // Caches the iterator, advances current iterator and returns the average
  // between them.
  double next_it_average(const std::vector<int>::const_iterator &it) noexcept;

  std::vector<int> _nums1;
  std::vector<int> _nums2;
  std::vector<int>::const_iterator it1;
  std::vector<int>::const_iterator it2;
  std::vector<int>::const_iterator current_it;
  int index;
};
} // namespace p4_simple
