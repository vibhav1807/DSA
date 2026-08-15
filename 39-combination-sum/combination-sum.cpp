class Solution {
public:
    void helper(vector<vector<int>> &answer, vector<int> &candidates, vector<int> &v, int idx, int n, int target){
        if(idx >= n || target < 0) return;
        if(target == 0){
            answer.push_back(v);
            return;
        }
        v.push_back(candidates[idx]);
        helper(answer, candidates, v, idx, n, target - candidates[idx]);
        v.pop_back();
        helper(answer, candidates, v, idx + 1, n, target);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int> v;
        vector<vector<int>> answer;
        helper(answer, candidates, v, 0, n, target);
        return answer;
    }
};