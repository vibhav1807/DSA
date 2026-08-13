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
    void helper(TreeNode* root, vector<int> &v, vector<vector<int>> &result, int targetSum){
        if(root == NULL) return;
        v.push_back(root->val);
        targetSum -= root -> val;
        if(root -> left == NULL && root -> right == NULL){
            if(targetSum == 0){
                result.push_back(v);
            }
            v.pop_back();
            return;
        }
        helper(root->left, v, result, targetSum);
        helper(root->right, v, result, targetSum);
        v.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> result;
        vector<int> v;
        helper(root, v, result, targetSum);
        return result;
    }
};