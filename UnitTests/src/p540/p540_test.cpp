#include "pch.h"
#include "CppUnitTest.h"
#include "leetcode-cpp/p540/p540_solution.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests
{
	TEST_CLASS(p540_test)
	{
	public:
		TEST_METHOD(test1)
		{
			auto solution{ leetcode::p540::Solution() };
			auto nums{ std::vector<int>{1, 1, 2, 3, 3, 4, 4, 8, 8} };
			auto result{ solution.singleNonDuplicate(nums) };

			Assert::AreEqual(2, result);
		}

		TEST_METHOD(test2) {
			auto solution{ leetcode::p540::Solution() };
			auto nums{ std::vector<int>{3, 3, 7, 7, 10, 11, 11} };
			auto result{ solution.singleNonDuplicate(nums) };

			Assert::AreEqual(10, result);
		}
	};
}


