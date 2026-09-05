class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int suffMin[n];
        suffMin[n - 1] = nums[n - 1];
        for(int i = n - 2; i >= 0; i--){
            if(nums[i] < suffMin[i+1]){
                suffMin[i] = nums[i];
            }
            else{
                suffMin[i] = suffMin[i+1];
            }
        } 
        int max = 0;       
        for(int i = 0; i < n; i++){
            if(nums[max] < nums[i]) max = i;
            if(nums[max] - suffMin[i] <= k) return i;
        }
        return -1;
    }
};