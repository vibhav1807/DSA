class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int size = nums.size();
        int bp = size - 2;
        int end = size - 1;
        while(bp >= 0 && nums[bp] >= nums[bp + 1]){
            bp--;
        }
        if(bp < 0){
            reverse(nums.begin(), nums.end());
            return;
        }
        while(nums[bp] >= nums[end]){
            end--;
        }
        swap(nums[bp], nums[end]);
        reverse(nums.begin() + bp + 1, nums.end());
    }
};