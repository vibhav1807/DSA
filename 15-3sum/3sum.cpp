class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for(int k = 0; k < nums.size(); k++){
            if(k > 0 && nums[k] == nums[k - 1]) continue;
            int target = -nums[k];
            int start = k + 1, end = nums.size() - 1;
            while(start < end){
                int sum = nums[start] + nums[end];
                if(sum > target) end--;
                else if (sum < target) start++;
                else{
                    result.push_back({nums[start], nums[end], nums[k]});
                    start++;
                    end--;
                    while(start < end && nums[start] == nums[start - 1]) start++;
                    while(start < end && nums[end] == nums[end + 1]) end--;
                }
            }
        }
        return result;
    }
};