#include "pch.h"
#include "CppUnitTest.h"
#include "leetcode-cpp/p278/p278_solution.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests
{
	TEST_CLASS(p278_test)
	{
	public:
		TEST_METHOD(test1)
		{
			auto solution{ leetcode::p278::Solution(4) };

			auto result{ solution.firstBadVersion(5) };
			Assert::AreEqual(4, result);
		}
	};
}
