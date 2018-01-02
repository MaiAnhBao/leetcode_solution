#include <iostream>
#include "Solution.h"
#include "LeetCode_def.h"
#include <iomanip>

//using namespace std;

void print_tree(TreeNode* root, int indent = 0);

int main()
{
    Solution sol;
   // cout << sol.checkPerfectNumber(28);
   // cout << sol.getSum(10, 10);

    // Create sample tree
    TreeNode* root = new TreeNode(3);
    TreeNode* left_1 = new TreeNode(4);
    TreeNode* right_1 = new TreeNode(5);
    root->left = left_1;
    root->right = right_1;
    TreeNode* right_left_2 = new TreeNode(-7);
    TreeNode* right_right_2 = new TreeNode(-6);
    left_1->left = right_left_2;
    left_1->right = right_right_2;
    TreeNode* left_3_1 = new TreeNode(-7);
    TreeNode* left_3_2 = new TreeNode(-5);
    right_left_2->left = left_3_1;
    right_right_2->left = left_3_2;
    TreeNode* left_4 = new TreeNode(-4);
    left_3_2->left = left_4;

   print_tree(root);

//    std::vector<int> ret = sol.selfDividingNumbers(1, 22);
//    for (int i = 0; i < ret.size(); ++i)
//	    std::cout << ret.at(i)  << " ";
    std::cout << "Result: " << sol.sumOfLeftLeaves(root) << std::endl; 
    return 0;
}

void print_tree(TreeNode* root, int indent) {
    if (root != NULL) {
	if (indent)
		std::cout << std::setw(indent) << ' ';
	std::cout << root->val << std::endl;
	if (root->left) print_tree(root->left, indent + 4);
	if (root->right) print_tree(root->right, indent + 4);

    }
}
