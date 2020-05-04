#include "pch.h"

#include "CppUnitTest.h"
#include "leetcode-cpp/p1433/p1433_solution.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests
{
	TEST_CLASS(p1433_test)
	{
	public:
		TEST_METHOD(test1) {
			auto solution{ leetcode::p1433::Solution() };
			auto result{ solution.checkIfCanBreak("abc","xya") };
			Assert::IsTrue(result);
		}

		TEST_METHOD(test2) {
			auto solution{ leetcode::p1433::Solution() };
			auto result{ solution.checkIfCanBreak("abe", "acd") };
			Assert::IsFalse(result);
		}

		TEST_METHOD(test3) {
			auto solution{ leetcode::p1433::Solution() };
			auto result{ solution.checkIfCanBreak("leetcodee", "interview") };
			Assert::IsTrue(result);
		}
	};
}
