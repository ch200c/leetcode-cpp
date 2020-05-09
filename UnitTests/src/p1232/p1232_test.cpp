#include "pch.h"

#include "CppUnitTest.h"
#include "leetcode-cpp/p1232/p1232_solution.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests
{
	TEST_CLASS(p1232_test)
	{
	public:
		TEST_METHOD(test1) {
			auto solution{ leetcode::p1232::Solution() };
			auto result{ solution.checkStraightLine(std::vector<std::vector<int>>{
				{ {1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 6}, {6, 7}}}) };

			Assert::IsTrue(result);
		}

		TEST_METHOD(test2) {
			auto solution{ leetcode::p1232::Solution() };
			auto result{ solution.checkStraightLine(std::vector<std::vector<int>>{
				{ {1, 1}, {2, 2}, {3, 4}, {4, 5}, {5, 6}, {7, 7}}}) };

			Assert::IsFalse(result);
		}
	};
}
