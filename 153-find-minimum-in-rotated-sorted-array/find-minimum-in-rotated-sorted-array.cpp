class Solution {
public:
    bool isSorted(vector<int> &nums){
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] > nums[i+1]) return false;
        }
        return true;
    }

    int findMin(vector<int>& nums) {
        int result = 0;
        if(isSorted(nums)) return nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i - 1] > nums[i]){
                result = nums[i];
                break;
            }
        }
        return result;
    }
};