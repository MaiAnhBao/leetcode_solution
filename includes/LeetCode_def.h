#ifndef LEETCODE_DEF_H
#define LEETCODE_DEF_H

#define DEBUG 1

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode * right;
    TreeNode(int x): val(x), left(NULL), right(NULL) {}
};

#endif // LEETCODE_DEF_H
