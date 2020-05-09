#include "pch.h"
#include "CppUnitTest.h"
#include "leetcode-cpp/p367/p367_solution.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests
{
	TEST_CLASS(p367_test)
	{
	public:
		TEST_METHOD(test1) {
			auto solution{ leetcode::p367::Solution() };
			auto result{ solution.isPerfectSquare(16) };
			Assert::IsTrue(result);
		}

		TEST_METHOD(test2) {
			auto solution{ leetcode::p367::Solution() };
			auto result{ solution.isPerfectSquare(14) };
			Assert::IsFalse(result);
		}
	};
}
