#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <vector>
#include <algorithm>
#include "dbg.h"
using namespace std;

/* Leetcode */
/* Type: Tree */
/* 题目信息 */
/*
 *110. Balanced Binary Tree
Given a binary tree, determine if it is height-balanced.

For this problem, a height-balanced binary tree is defined as:

a binary tree in which the left and right subtrees of every node differ in height by no more than 1.

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: true
Example 2:


Input: root = [1,2,2,3,3,null,null,4,4]
Output: false
Example 3:

Input: root = []
Output: true
 

Constraints:

The number of nodes in the tree is in the range [0, 5000].
-104 <= Node.val <= 104
 */

/* my solution */


/* better solution */
// 自底向上
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return height(root) >= 0;
        
    }
private:    
    int height(TreeNode* root)
    {
        if (!root)
            return 0;
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        if (leftHeight == -1 || rightHeight == -1 || abs(leftHeight - rightHeight) > 1)
            return -1;
        else
            return max(leftHeight, rightHeight) + 1;
    }
};

/* 一些总结 */
// 1. 题意: 判断一棵树是否为平衡二叉树
// 算出左子树高度，算出右子树高度，然后对比
// 需要注意的点: 
// 1. 
// 2. 
// 3. 

