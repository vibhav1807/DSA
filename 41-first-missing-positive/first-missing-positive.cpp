class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        vector<bool> seen(n+1);
        for(int i = 0; i < n; i++){
            if(nums[i] >= 1 && nums[i] <= n+1){
                seen[nums[i]] = true;
            }
        }
        for(int k = 1; k < n+1; k++){
            if(seen[k] == false){
                return k;
            }
        }
        return n+1;
    }
};