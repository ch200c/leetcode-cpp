#include "pch.h"
#include "CppUnitTest.h"
#include "leetcode-cpp/p78/p78_solution.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests
{
	TEST_CLASS(p78_test)
	{
	public:
		TEST_METHOD(test1)
		{
			auto solution{ leetcode::p78::Solution() };

			auto nums{ std::vector<int>{ 1,2,3} };
			auto result{ solution.subsets(nums) };

			auto expected{ std::vector<std::vector<int>>{
				{3},
				{1},
				{2},
				{1, 2, 3},
				{1, 3},
				{2, 3},
				{1, 2},
				{}} 
			};

			std::vector<std::vector<int>> difference;
			std::set_difference(expected.begin(), expected.end(), result.begin(), result.end(), std::back_inserter(difference));
			Assert::IsFalse(difference.size());
		}
	};
}


