#include <iostream>
#include "Solution.h"

using namespace std;

int main()
{
    Solution sol;
   // cout << sol.checkPerfectNumber(28);
   // cout << sol.getSum(10, 10);
    std::vector<int> ret = sol.selfDividingNumbers(1, 22);
    for (int i = 0; i < ret.size(); ++i)
	    std::cout << ret.at(i)  << " ";
    return 0;
}
