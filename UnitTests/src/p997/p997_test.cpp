#include "pch.h"

#include "CppUnitTest.h"
#include "leetcode-cpp/p997/p997_solution.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests
{
	TEST_CLASS(p997_test)
	{
		public: TEST_METHOD(test1)
		{
			auto solution{ leetcode::p997::Solution() };
			auto result{ solution.findJudge(2, std::vector<std::vector<int>>{ {1, 2}}) };
			Assert::AreEqual(2, result);
		}

		TEST_METHOD(test2)
		{
			auto solution{ leetcode::p997::Solution() };
			auto result{
				solution.findJudge(3, std::vector<std::vector<int>>{ {1, 3}, {2, 3}}) };
			Assert::AreEqual(3, result);
		}

		TEST_METHOD(test3) {
			auto solution{ leetcode::p997::Solution() };
			auto result{ solution.findJudge(
				3, std::vector<std::vector<int>>{ {1, 3}, {2, 3}, {3, 1}}) };
			Assert::AreEqual(-1, result);
		}

		TEST_METHOD(test4) {
			auto solution{ leetcode::p997::Solution() };
			auto result{
				solution.findJudge(3, std::vector<std::vector<int>>{ {1, 2}, {2, 3}}) };
			Assert::AreEqual(-1, result);
		}

		TEST_METHOD(test5) {
			auto solution{ leetcode::p997::Solution() };
			auto result{ solution.findJudge(4, std::vector<std::vector<int>>{
												{1, 3},
												{1, 4},
												{2, 3},
												{2, 4},
												{4, 3}}) };
			Assert::AreEqual(3, result);
		}
		TEST_METHOD(test6) {
			auto solution{ leetcode::p997::Solution() };
			auto result{ solution.findJudge(11, std::vector<std::vector<int>>{ {1, 8},
																			{1, 3},
																			{2, 8},
																			{2, 3},
																			{4, 8},
																			{4, 3},
																			{5, 8},
																			{5, 3},
																			{6, 8},
																			{6, 3},
																			{7, 8},
																			{7, 3},
																			{9, 8},
																			{9, 3},
																			{11, 8},
																			{11, 3}}) };
			Assert::AreEqual(-1, result);
		}
	};
}
