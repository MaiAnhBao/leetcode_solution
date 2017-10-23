#include "Solution.h"

Solution::Solution()
{
    std::cout << __FUNCTION__ << std::endl;
}

/*
 * Description: The Hamming distance betwwen two integers is the number of positions at which the corresponding bits are different.
 * Links: https://leetcode.com/problems/hamming-distance/description
 */
int Solution::hammingDistance(int x, int y)
{
    unsigned int unum = (unsigned int) x^y;
    int count = 0;
    int i;
    while (unum) {
        if (unum & 1) count++;
        unum>>=1;
    }

    return count;
}

/*
 * Description: https://leetcode.com/problem/judge-route-circle/descriptions
 */
bool Solution::judgeCircle(std::string moves)
{
    int origX = 0, origY = 0;
    for(int len = 0; len < moves.length(); len++)
    {
        switch (moves.at(len)) {
        case 'U':
            origY ++;
            break;
        case 'D':
            origY --;
            break;
        case 'R':
            origX ++;
            break;
        case 'L':
            origX --;
            break;
        default:
            break;
        }
    }

    return (origX == 0) && (origY == 0);
}

/*
 *
 *
 */
TreeNode* Solution::mergeTrees(TreeNode* t1, TreeNode* t2) {
    TreeNode* ret(0);

    return ret;
}

int Solution::findComplement(int num)
{
    std::bitset<32> unum(num);
    int m_num = num;
//    while (m_num != 0)
//    {
//        mask ++;
//        m_num >>= 1;
//        std::cout << mask << "\t" << m_num << std::endl;
//    }

    int mask = m_num ^ 3;
    std::cout << mask << std::endl;

    int mmask = num;
    mmask |= mmask >> 1;
    std::cout << mmask << std::endl;
    mmask |= mmask >> 2;
    std::cout << mmask << std::endl;
    mmask |= mmask >> 4;
    std::cout << mmask << std::endl;
    mmask |= mmask >> 8;
    std::cout << mmask << std::endl;
    mmask |= mmask >> 16;
    std::cout << mmask << std::endl;

//    for (int i = 0; i < 32; i++)
//    {
//        std::cout << "Bit" << i << "th:\t" << ((num >> i) & 1) << std::endl;
//    }
//    std::cout << unum << std::endl << ~unum << std::endl;
////    std::cout << (int)(~unum.to_ulong()) << std::endl;
//    int test = (int)(~unum & in_turn).to_ulong();
//    std::cout << test << std::endl;
//    std::cout << (unsigned int ) ~num << std::endl;
    return mask;
}

bool Solution::isNumber(std::string s)
{
    if (std::regex_match(s,std::regex("\\d")))
    {
        std::cout << "OK" << std::endl;
        return true;
    }
    return false;
}

/*
 *  Given two strings s and t which consist of only lowercase letters.
 *  String t is generated by random shuffling string s and then add one more letter at a random position.
 *  Find the letter that was added in t.
 *  Links: https://leetcode.com/problems/find-the-difference/description/
 */
char Solution::findTheDifference(std::string s, std::string t)
{
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < s.size(); i++) {
        sum1 += int(s.at(i));
        sum2 += int(t.at(i));
    }
    sum2 += int(t.at(s.size()));
    return char(sum2-sum1);
}

std::vector<int> Solution::findDisappearedNumbers(std::vector<int> &nums)
{
    std::vector<int> ret;
    return ret;
}

/*
 * Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.
 * Links: https://leetcode.com/problems/missing-number/description/
 */
int Solution::missingNumber(std::vector<int> &nums)
{
    int sum = nums.size()*(nums.size()+1)/2;
    for (int i = 0; i < nums.size(); ++i) {
        sum -= nums.at(i);
    }
    return sum;
}

bool Solution::checkPerfectNumber(int num)
{
    int sum = 1;
    if (num % 2 == 0)
    {
        sum += (2 + num/2);
        num = num/2;
    }

    std::cout << sum << std::endl;

    for (int i = 2; i < num/2 + 1; ++i)
    {
        if (num%i == 0)
            sum += i;
        std::cout << sum << std::endl;
    }
    return sum==num;
}