#include "pch.h"

#include "CppUnitTest.h"
#include "leetcode-cpp/p169/p169_solution.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests
{
	TEST_CLASS(p169_test)
	{
	public:
		TEST_METHOD(test1) {
			auto solution{ leetcode::p169::Solution() };
			auto input{ std::vector<int>{3, 2, 3} };
			auto result{ solution.majorityElement(input) };
			Assert::AreEqual(3, result);
		}

		TEST_METHOD(test2) {
			auto solution{ leetcode::p169::Solution() };
			auto input{ std::vector<int>{2, 2, 1, 1, 1, 2, 2} };
			auto result{ solution.majorityElement(input) };
			Assert::AreEqual(2, result);
		}
	};
}
