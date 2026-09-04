class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int max = 0, min = n - 1;
        for(int i = 0; i < n; i++){
            if (nums[i] < nums[min]) min = i;
        }

        for(int i = 0; i < n; i++){
            if (nums[i] > nums[max]) max = i;
            if (i > min){
                min++;
                for(int j = i+1; j < n; j++){
                    if (nums[j] < nums[min]) min = j;
                }
            }
            if(nums[max] - nums[min] <= k) return i;
        }
        return -1;
    }
};