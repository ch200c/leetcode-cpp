#include "pch.h"

#include "CppUnitTest.h"
#include "leetcode-cpp/p993/p993_solution.h"
#include "leetcode-cpp/p993/p993_tree_node.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests
{
	TEST_CLASS(p993_test)
	{
	public:
		TEST_METHOD(test1)
		{
			using namespace leetcode::p993;

			auto node1{ std::make_unique<TreeNode>(1) };
			auto node2{ std::make_unique<TreeNode>(2) };
			auto node3{ std::make_unique<TreeNode>(3) };
			auto node4{ std::make_unique<TreeNode>(4) };

			node1->left = node2.get();
			node1->right = node3.get();
			node2->left = node4.get();

			auto solution{ Solution() };
			auto result{ solution.isCousins(node1.get(), 4, 3) };
			Assert::IsFalse(result);
		}

		TEST_METHOD(test2)
		{
			using namespace leetcode::p993;

			auto node1{ std::make_unique<TreeNode>(1) };
			auto node2{ std::make_unique<TreeNode>(2) };
			auto node3{ std::make_unique<TreeNode>(3) };
			auto node4{ std::make_unique<TreeNode>(4) };
			auto node5{ std::make_unique<TreeNode>(5) };

			node1->left = node2.get();
			node1->right = node3.get();
			node2->right = node4.get();
			node3->right = node5.get();

			auto solution{ Solution() };
			auto result{ solution.isCousins(node1.get(), 5,4) };
			Assert::IsTrue(result);
		}

		TEST_METHOD(test3)
		{
			using namespace leetcode::p993;

			auto node1{ std::make_unique<TreeNode>(1) };
			auto node2{ std::make_unique<TreeNode>(2) };
			auto node3{ std::make_unique<TreeNode>(3) };
			auto node4{ std::make_unique<TreeNode>(4) };

			node1->left = node2.get();
			node1->right = node3.get();
			node2->right = node4.get();

			auto solution{ Solution() };
			auto result{ solution.isCousins(node1.get(),2,3) };
			Assert::IsFalse(result);
		}
	};
}
