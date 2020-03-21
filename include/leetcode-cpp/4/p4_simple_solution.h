#pragma once
#include <vector> // std::vector

namespace p4_simple {
class Solution {
public:
  double findMedianSortedArrays(const std::vector<int> &nums1,
                                const std::vector<int> &nums2) noexcept;

private:
  void advance_iterator() noexcept;

  bool is_current_it_nums1;
  std::vector<int> _nums1;
  std::vector<int> _nums2;
  std::vector<int>::const_iterator it1;
  std::vector<int>::const_iterator it2;
  int index;
};
} // namespace p4_simple
