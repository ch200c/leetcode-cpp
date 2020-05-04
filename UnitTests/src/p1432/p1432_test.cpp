#include "pch.h"

#include "CppUnitTest.h"
#include "leetcode-cpp/p1432/p1432_solution.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests
{
	TEST_CLASS(p1432_test)
	{
	public:
		TEST_METHOD(test1) {
			auto solution{ leetcode::p1432::Solution() };
			auto result{ solution.maxDiff(555) };
			Assert::AreEqual(888, result);
		}

		TEST_METHOD(test2) {
			auto solution{ leetcode::p1432::Solution() };
			auto result{ solution.maxDiff(9) };
			Assert::AreEqual(8, result);
		}

		TEST_METHOD(test3) {
			auto solution{ leetcode::p1432::Solution() };
			auto result{ solution.maxDiff(123456) };
			Assert::AreEqual(820000, result);
		}

		TEST_METHOD(test4) {
			auto solution{ leetcode::p1432::Solution() };
			auto result{ solution.maxDiff(10000) };
			Assert::AreEqual(80000, result);
		}

		TEST_METHOD(test5) {
			auto solution{ leetcode::p1432::Solution() };
			auto result{ solution.maxDiff(9288) };
			Assert::AreEqual(8700, result);
		}
	};
}

