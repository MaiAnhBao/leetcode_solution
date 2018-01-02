#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>
#include <string>
#include <bitset>
#include <regex>
#include <iterator>
#include <vector>

#include "LeetCode_def.h"

class Solution
{
public:
    Solution();

    int hammingDistance(int x,int y);
    bool judgeCircle(std::string moves);

    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2);

    int findComplement(int num);

    bool isNumber(std::string s);

    char findTheDifference(std::string s, std::string t);

    std::vector<int> findDisappearedNumbers(std::vector<int>& nums);

    int missingNumber(std::vector<int>& nums);

    bool checkPerfectNumber(int num);

    int getSum(int a, int b);

    std::vector<int> selfDividingNumbers(int left, int right);   

    int sumOfLeftLeaves(TreeNode* root); 
};

#endif // SOLUTION_H
