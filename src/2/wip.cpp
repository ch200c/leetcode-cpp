#include "catch2/catch.hpp"
#include <algorithm> // std::transform
#include <string>    // std::string, std::to_string, std::stoull
#include <vector>    // std::vector

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  // Creates a node list from digits and returns its root
  static ListNode *create_list(const std::vector<int> &digits) noexcept {

    ListNode *root_node{nullptr};
    ListNode *previous_node{nullptr};

    for (const auto &digit : digits) {

      auto new_node{new ListNode(digit)};

      if (previous_node) {
        previous_node->next = new_node;
      } else {
        root_node = new_node;
      }
      previous_node = new_node;
    }

    return root_node;
  }

  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) const noexcept {

    auto number_1{parse(l1)};
    auto number_2{parse(l2)};

    // Fill the shorter number string with zeroes
    if (number_1.size() < number_2.size()) {
      number_1.append(number_2.size() - number_1.size(), '0');
    } else if (number_2.size() < number_1.size()) {
      number_2.append(number_1.size() - number_2.size(), '0');
    }

    std::string result_string;
    auto carry{0};
    const auto size{number_1.size()};

    for (auto i{0}; i < size; ++i) {
      auto digit_1{std::stoul(std::string{number_1[i]})};
      auto digit_2{std::stoul(std::string{number_2[i]})};

      auto sum{digit_1 + digit_2 + carry};
      auto result{std::div(sum, 10)};

      result_string.append(std::to_string(result.rem));
      carry = result.quot;
    }

    if (carry) {
      result_string.append(std::to_string(carry));
    }

    auto digits{std::vector<int>(result_string.size())};

    std::transform(result_string.cbegin(), result_string.cend(), digits.begin(),
                   [&](char c) { return std::stoul(std::string{c}); });

    return create_list(digits);
  }

private:
  // Parses and returns the number represented by the node in reverse
  std::string parse(ListNode *l1) const noexcept {

    std::string number_string;
    ListNode *current_node{nullptr};

    for (current_node = l1; current_node; current_node = current_node->next) {
      number_string.append(std::to_string(current_node->val));
    }

    return number_string;
  }
};

TEST_CASE("Problem 2") {

  auto root_node_1{Solution::create_list(std::vector<int>{2, 4, 3})};
  auto root_node_2{Solution::create_list(std::vector<int>{5, 6, 4})};

  Solution solution;
  auto result{solution.addTwoNumbers(root_node_1, root_node_2)};

  REQUIRE(result->val == 7);
  REQUIRE(result->next->val == 0);
  REQUIRE(result->next->next->val == 8);
}