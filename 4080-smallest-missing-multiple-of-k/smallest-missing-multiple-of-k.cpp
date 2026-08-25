class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int result;
        unordered_set s(nums.begin(), nums.end());
        for(int i = 1; i <= nums.size() + 1; i++){
            if(!s.count(i*k)){
                result = i*k;
                break;
            }
        }
        return result;
    }
};