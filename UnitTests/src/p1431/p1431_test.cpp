#include "pch.h"
#include "CppUnitTest.h"
#include "leetcode-cpp/p1431/p1431_solution.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests {
	TEST_CLASS(p1431_test) {
public:
	TEST_METHOD(test1) {
		auto solution{ leetcode::p1431::Solution() };

		auto candies{ std::vector<int>{2, 3, 5, 1, 3} };
		auto result{ solution.kidsWithCandies(candies, 3) };
		auto expected_output{ std::vector<bool>{true, true, true, false, true} };

		Assert::IsTrue(
			std::equal(expected_output.cbegin(), expected_output.cend(), result.cbegin(), result.cend()));
	}

	TEST_METHOD(test2) {
		auto solution{ leetcode::p1431::Solution() };

		auto candies{ std::vector<int>{4,2,1,1,2} };
		auto result{ solution.kidsWithCandies(candies, 1) };
		auto expected_output{ std::vector<bool>{true,false,false,false,false} };

		Assert::IsTrue(
			std::equal(expected_output.cbegin(), expected_output.cend(), result.cbegin(), result.cend()));
	}

	TEST_METHOD(test3) {
		auto solution{ leetcode::p1431::Solution() };

		auto candies{ std::vector<int>{12,1,12} };
		auto result{ solution.kidsWithCandies(candies, 10) };
		auto expected_output{ std::vector<bool>{true,false,true} };

		Assert::IsTrue(
			std::equal(expected_output.cbegin(), expected_output.cend(), result.cbegin(), result.cend()));
	}
	}
	;
}
