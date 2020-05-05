#include "pch.h"

#include "CppUnitTest.h"
#include "leetcode-cpp/p387/p387_solution.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests {

	TEST_CLASS(p387_test)
	{
	public:
		TEST_METHOD(test1) {
			auto solution{ leetcode::p387::Solution() };
			auto result{ solution.firstUniqChar("leetcode") };
			Assert::AreEqual(0, result);
		}
		TEST_METHOD(test2) {
			auto solution{ leetcode::p387::Solution() };
			auto result{ solution.firstUniqChar("loveleetcode") };
			Assert::AreEqual(2, result);
		}
	};
}
