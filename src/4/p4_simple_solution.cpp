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

  if (_nums1.empty()) {
    is_current_it_nums1 = false;
  } else if (_nums2.empty()) {
    is_current_it_nums1 = true;
  } else {

    if (*it1 < *it2) {
      is_current_it_nums1 = true;
    } else {
      is_current_it_nums1 = false;
    }
  }

  index = 0;

  while (index != median_index) {
    advance_iterator();
  }

  if (is_odd) {
    return is_current_it_nums1 ? *it1 : *it2;
  } else {
    return next_it_average(is_current_it_nums1 ? it1 : it2);
  }
}

void Solution::advance_iterator() noexcept {

  auto next_it{is_current_it_nums1 ? std::next(it1) : std::next(it2)};

  if (is_current_it_nums1) {
    if (next_it == _nums1.cend()) {
      is_current_it_nums1 = false;
    } else {

      if (it2 == _nums2.cend()) {

        it1 = next_it;
        is_current_it_nums1 = true;

      } else {
        if (*next_it < *it2) {
          it1 = next_it;
          is_current_it_nums1 = true;
        } else {

          is_current_it_nums1 = false;
        }
      }
    }
  } else {

    if (next_it == _nums2.cend()) {
      is_current_it_nums1 = true;
    } else {

      if (it1 == _nums1.cend()) {
        it2 = next_it;
        is_current_it_nums1 = false;
      } else {

        if (*next_it < *it1) {
          it2 = next_it;
          is_current_it_nums1 = false;
        } else {

          is_current_it_nums1 = true;
        }
      }
    }
  }

  index++;
}

double
Solution::next_it_average(const std::vector<int>::const_iterator &it) noexcept {
  auto old_it{it};
  advance_iterator();
  return (static_cast<double>(*old_it) + (is_current_it_nums1 ? *it1 : *it2)) /
         2.0; // C26451
}

} // namespace p4_simple