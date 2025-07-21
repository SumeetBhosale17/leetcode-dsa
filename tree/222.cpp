/*
Problem 222: Count Complete Tree Nodes
Difficulty: Easy
Tags: Tree, Binary Tree, Binary Search
https://leetcode.com/problems/count-complete-tree-nodes/
*/
class Solution {
public:

    void count(TreeNode* root, int& i)
    {
        if(root == nullptr) return;
        i++;
        count(root->left, i);
        count(root->right, i);
    }

    int countNodes(TreeNode* root) {
        int c = 0;
        count(root, c);
        return c;
    }
};
