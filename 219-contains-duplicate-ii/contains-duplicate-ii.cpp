class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> s;
        if(k >= nums.size()) k = nums.size() - 1;
        for(int i = 0; i <= k; i++){
            if(s.find(nums[i]) != s.end()){
                return true;
            }
            s.insert(nums[i]);
        }
        int start = 0;
        for(int end = k+1; end < nums.size(); end++){
            s.erase(nums[start++]);
            if(s.find(nums[end]) != s.end()) return true;
            s.insert(nums[end]);
        }
        return false;
    }
};