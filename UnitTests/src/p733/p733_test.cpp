#include "pch.h"
#include "CppUnitTest.h"
#include "leetcode-cpp/p733/p733_solution.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests
{
	TEST_CLASS(p733_test)
	{
	public:
		TEST_METHOD(test1)
		{
			auto solution{ leetcode::p733::Solution() };
			auto input_image{ std::vector<std::vector<int>>{ {1,1,1},{1,1,0},{1,0,1} } };
			auto result{ solution.floodFill(input_image, 1, 1, 2) };

			Assert::AreEqual(2, result[0][0]);
			Assert::AreEqual(2, result[0][1]);
			Assert::AreEqual(2, result[0][2]);

			Assert::AreEqual(2, result[1][0]);
			Assert::AreEqual(2, result[1][1]);
			Assert::AreEqual(0, result[1][2]);

			Assert::AreEqual(2, result[2][0]);
			Assert::AreEqual(0, result[2][1]);
			Assert::AreEqual(1, result[2][2]);
		}
	};
}


