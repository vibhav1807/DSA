/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    long long countFrom(TreeNode* root, long long remaining){
        if(root == NULL) return 0;
        return (remaining == root->val ? 1 : 0) + countFrom(root->left, remaining- root->val) + countFrom(root->right, remaining - root->val);
    }

    int pathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return 0;
        long long remaining = countFrom(root, targetSum);
        int left = pathSum(root->left, targetSum);
        int right = pathSum(root->right, targetSum);
        return left + right + remaining;
    }
};