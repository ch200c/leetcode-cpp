#include "pch.h"
#include "CppUnitTest.h"
#include "leetcode-cpp/p1/a1/p1_a1_solution.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests
{
	TEST_CLASS(p1_a1_test)
	{
	public:
		TEST_METHOD(test1)
		{
			auto input_nums{ std::vector<int>{2, 7, 11, 15} };
			auto input_target{ 9 };
			auto output_indices{ std::vector<int>{0, 1} };

			auto solution{ leetcode::p1::a1::Solution() };
			auto result_indices{ solution.twoSum(input_nums, input_target) };

			for (const auto& index : output_indices) {
				auto it{ std::find(result_indices.cbegin(), result_indices.cend(), index) };
				Assert::IsTrue(it != result_indices.cend());
			}
		}
	};
}
