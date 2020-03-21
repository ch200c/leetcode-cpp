#include "leetcode-cpp/4/p4_simple_solution.h"
#include "catch2/catch.hpp"
#include <cmath>    // std::lround, std::floor
#include <iterator> // std::next
#include <vector>   // std::vector

namespace p4_simple {

double
Solution::findMedianSortedArrays(const std::vector<int> &nums1,
                                 const std::vector<int> &nums2) noexcept {
  _nums1 = nums1;
  _nums2 = nums2;

  auto size{_nums1.size() + _nums2.size()};
  auto is_odd{size % 2};
  auto floored_middle_index{std::lround(std::floor(size / 2.0))};
  auto median_index{is_odd ? floored_middle_index : floored_middle_index - 1};

  it1 = _nums1.cbegin();
  it2 = _nums2.cbegin();

  if (!median_index) {
    if (is_odd) {
      return nums1.empty() ? *it2 : *it1;
    } else {
      return next_it_average(nums1.empty() ? it2 : it1);
    }
  }

  current_it = it2;
  index = 1;

  while (index != median_index) {
    advance_iterator();
  }

  return is_odd ? *current_it : next_it_average(current_it);
}

void Solution::advance_iterator() noexcept {

  if (it1 == _nums1.cend()) {
    it2 = std::next(it2);
    current_it = it2;
  } else if (it2 == _nums2.cend()) {
    it1 = std::next(it1);
    current_it = it1;
  } else {
    if (*it1 < *it2) {
      it1 = std::next(it1);
      current_it = it1;
    } else {
      it2 = std::next(it2);
      current_it = it2;
    }
  }

  index++;
}

double
Solution::next_it_average(const std::vector<int>::const_iterator &it) noexcept {
  auto old_it{it};
  advance_iterator();
  return (static_cast<double>(*old_it) + *current_it) / 2.0; // C26451
}

} // namespace p4_simple