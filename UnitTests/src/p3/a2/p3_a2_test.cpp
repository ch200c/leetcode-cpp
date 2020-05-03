#include "pch.h"
#include "CppUnitTest.h"
#include "leetcode-cpp/p3/a2/p3_a2_solution.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests
{
	TEST_CLASS(p3_a2_test)
	{
	public:
		TEST_METHOD(test1)
		{
			auto solution{ leetcode::p3::a2::Solution() };
			auto result{ solution.lengthOfLongestSubstring("aab") };
			Assert::AreEqual(2, result);
		}

		TEST_METHOD(test2)
		{
			auto solution{ leetcode::p3::a2::Solution() };
			auto result{ solution.lengthOfLongestSubstring("abba") };
			Assert::AreEqual(2, result);
		}

		TEST_METHOD(test3)
		{
			auto solution{ leetcode::p3::a2::Solution() };
			auto result{ solution.lengthOfLongestSubstring("au") };
			Assert::AreEqual(2, result);
		}

		TEST_METHOD(test4)
		{
			auto solution{ leetcode::p3::a2::Solution() };
			auto result{ solution.lengthOfLongestSubstring("") };
			Assert::AreEqual(0, result);
		}

		TEST_METHOD(test5)
		{
			auto solution{ leetcode::p3::a2::Solution() };
			auto result{ solution.lengthOfLongestSubstring("abcabcbb") };
			Assert::AreEqual(3, result);
		}

		TEST_METHOD(test6)
		{
			auto solution{ leetcode::p3::a2::Solution() };
			auto result{ solution.lengthOfLongestSubstring("bbbbb") };
			Assert::AreEqual(1, result);
		}

		TEST_METHOD(test7)
		{
			auto solution{ leetcode::p3::a2::Solution() };
			auto result{ solution.lengthOfLongestSubstring("pwwkew") };
			Assert::AreEqual(3, result);
		}
	};
}

