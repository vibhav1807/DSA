class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int a = size;
        for(int i = 0; i < size; i++){
            a = a ^ i;
            a = a ^ nums[i];
        }
        return a;
    }
};