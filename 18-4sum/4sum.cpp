class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for(int a = 0; a < nums.size(); a++){
            if(a > 0 && nums[a] == nums[a - 1]) continue;
            for(int b = a + 1; b <  nums.size(); b++){
                if(b > a + 1 && nums[b] == nums[b - 1]) continue;
                long long temp_tgt = (long long)target - nums[a] - nums[b];
                int start = b + 1;
                int end = nums.size() - 1;
                while(start < end){
                    long long sum = (long long)nums[start] + nums[end];
                    if(sum < temp_tgt) start++;
                    else if (sum > temp_tgt) end--;
                    else{
                        result.push_back({nums[a], nums[b], nums[start], nums[end]});
                        start++;
                        end--;
                        while(start < end && nums[start] == nums[start - 1]) start++;
                        while(start < end && nums[end] == nums[end + 1]) end--;
                    }
                }
            }
        }
        return result;
    }
};