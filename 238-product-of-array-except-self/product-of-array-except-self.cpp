class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 0);
        int count = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                count++;
            }
            if(count > 1) break;
        }
        if(count > 1){
            return result;
        }
        int p = 1;
        for(int i = 0; i < n; i++){
            p *= nums[i];
        }
        int idx = -1;
        for(int i = 0; i < n; i++){
            if(nums[i] != 0){
                result[i] = p / nums[i];
            }
            else{
                idx = i;
            }
        }
        if(idx != -1){
            int p1 = 1;
            for(int i = 0; i < n; i++){
                if(i == idx) continue;
                p1 *= nums[i];
            }
            result[idx] = p1;
        }
        return result;
    }
};