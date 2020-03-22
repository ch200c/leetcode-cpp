#pragma once
#include <vector> // std::vector

namespace p4_simple {
class Solution {
public:
  double findMedianSortedArrays(const std::vector<int> &nums1,
                                const std::vector<int> &nums2) noexcept;

private:
  void advance_iterator() noexcept;

  bool is_it1_ignored{false};
  bool is_it2_ignored{false};
  bool is_current_it1;
  int index;
  std::vector<int> _nums1;
  std::vector<int> _nums2;
  std::vector<int>::const_iterator it1;
  std::vector<int>::const_iterator it2;
};
} // namespace p4_simple
