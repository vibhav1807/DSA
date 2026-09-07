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
    void build(TreeNode* root, unordered_map<int, int> &mp){
        if(root == NULL) return;
        mp.insert({root->val, 0});
        build(root->left, mp);
        build(root->right, mp);
    }

    void traverse(TreeNode* root, unordered_map<int, int> &mp){
        if(root == NULL) return;
        mp[root->val]++;
        traverse(root->left, mp);
        traverse(root->right, mp);
    }

    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> mp;
        vector<int> result;
        int max = 0;
        build(root, mp);
        traverse(root, mp);
        for(auto it : mp){
            if(it.second > max) max = it.second;
        }
        for(auto it : mp){
            if(it.second == max){
                result.push_back(it.first);
            }
        }
        return result;
    }
};