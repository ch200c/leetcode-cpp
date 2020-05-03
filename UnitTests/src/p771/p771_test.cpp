#include "pch.h"
#include "CppUnitTest.h"
#include "leetcode-cpp/p771/p771_solution.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests {
TEST_CLASS(p771_test){
  public : TEST_METHOD(test1){auto solution{leetcode::p771::Solution()};

auto result{solution.numJewelsInStones("aA", "aAAbbbb")};
Assert::AreEqual(3,result);
} 

 TEST_METHOD(test2) {
  auto solution{leetcode::p771::Solution()};

  auto result{solution.numJewelsInStones("z", "ZZ")};
  Assert::AreEqual(0, result);
} 

}
;
}


