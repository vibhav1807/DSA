class Solution {
public:
    void subset(int idx, vector<int> &v, vector<int> &arr, vector<vector<int>> &result, int n){
    if(idx == n){
        result.push_back(v);
        return;
    }
    v.push_back(arr[idx]);
    subset(idx+1, v, arr, result, n);
    v.pop_back();
    subset(idx+1, v, arr, result, n);
}

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> v;
        vector<vector<int>> result;
        int n = nums.size();
        subset(0, v, nums, result, n);
        return result;
    }
};