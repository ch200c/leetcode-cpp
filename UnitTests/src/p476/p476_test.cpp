#include "pch.h"

#include "CppUnitTest.h"
#include "leetcode-cpp/p476/p476_solution.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests
{
	TEST_CLASS(p476_test)
	{
	public:
		TEST_METHOD(test1) {
			auto solution{ leetcode::p476::Solution() };
			auto result{ solution.findComplement(5) };
			Assert::AreEqual(2, result);
		}
		TEST_METHOD(test2) {
			auto solution{ leetcode::p476::Solution() };
			auto result{ solution.findComplement(1) };
			Assert::AreEqual(0, result);
		}
		TEST_METHOD(test3) {
			auto solution{ leetcode::p476::Solution() };
			auto result{ solution.findComplement(2147483647) };
			Assert::AreEqual(0, result);
		}
	};
}
