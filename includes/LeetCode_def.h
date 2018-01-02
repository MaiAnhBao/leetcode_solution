#ifndef LEETCODE_DEF_H
#define LEETCODE_DEF_H

#define DEBUG 1

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode * right;
    TreeNode(int x): val(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode* _left, TreeNode* _right): val(x), left(_left), right(_right) {}
};

//TreeNode* left_most(struct TreeNode* node)
//{
//    if (node == NULL) return node;
//    while (node->left == NULL) 
//        node = node->left;
//    return node;
//}


#endif // LEETCODE_DEF_H
