#include "pch.h"
#include "CppUnitTest.h"
#include "leetcode-cpp/p1431/p1431_solution.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests {
TEST_CLASS(p1431_test){
  public : TEST_METHOD(test1){auto solution{leetcode::p1431::Solution()};


         /*
Input: candies = [2,3,5,1,3], extraCandies = 3
Output: [true,true,true,false,true] 
         */
auto candies{std::vector<int>{2, 3, 5, 1, 3}};
auto result{solution.kidsWithCandies(candies, 3)};
auto expected_output{std::vector<bool>{true, true, true, false, true}};

Assert::IsTrue( std::equal(expected_output.cbegin(), expected_output.cend(), result.cbegin(),
              result.cend()));

}

}
;
}
