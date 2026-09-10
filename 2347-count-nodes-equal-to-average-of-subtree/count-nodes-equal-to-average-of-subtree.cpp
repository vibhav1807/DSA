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
    void helper(TreeNode* root, int* count, int* sum){
        if(root == NULL) return;
        (*count)++;
        (*sum) += root->val;
        helper(root->left, count, sum);
        helper(root->right, count, sum);
    }

    int averageOfSubtree(TreeNode* root) {
        if(root == NULL) return 0;
        int count = 0, sum = 0;
        helper(root, &count, &sum);
        return (sum/count == root->val) + averageOfSubtree(root->left) + averageOfSubtree(root->right);
    }
};