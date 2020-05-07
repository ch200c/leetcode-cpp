#include "pch.h"
#include "CppUnitTest.h"
#include "leetcode-cpp/p2/p2_solution.h"
#include "leetcode-cpp/p2/p2_list_node.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests
{
	TEST_CLASS(p2_test)
	{
	public:
		TEST_METHOD(test1)
		{
			using namespace leetcode::p2;
			auto root_node1{ Solution::to_list(std::vector<int>{2, 4, 3}) };
			auto root_node2{ Solution::to_list(std::vector<int>{5,6,4}) };

			auto solution{ Solution() };
			auto result{ solution.addTwoNumbers(root_node1, root_node2) };

			Assert::AreEqual(7, result->val);
			Assert::AreEqual(0, result->next->val);
			Assert::AreEqual(8, result->next->next->val);
		}
	};
}

