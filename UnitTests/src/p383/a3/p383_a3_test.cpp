#include "pch.h"
#include "CppUnitTest.h"
#include "leetcode-cpp/p383/a3/p383_a3_solution.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests
{
	TEST_CLASS(p383_a3_test)
	{
	public:
		TEST_METHOD(test1) {
			auto solution{ leetcode::p383::a3::Solution() };
			auto result{ solution.canConstruct("a", "b") };
			Assert::IsFalse(result);
		}

		TEST_METHOD(test2) {
			auto solution{ leetcode::p383::a3::Solution() };
			auto result{ solution.canConstruct("aa", "ab") };
			Assert::IsFalse(result);
		}
		TEST_METHOD(test3) {
			auto solution{ leetcode::p383::a3::Solution() };
			auto result{ solution.canConstruct("aa", "aab") };
			Assert::IsTrue(result);
		}

		TEST_METHOD(test4) {
			auto solution{ leetcode::p383::a3::Solution() };
			auto result{ solution.canConstruct("bjaajgea",
											  "affhiiicabhbdchbidghccijjbfjfhjeddgggbajhi"
											  "dhjchiedhdibgeaecffbbbefiabjdhggihccec") };
			Assert::IsTrue(result);
		}
	};
}
