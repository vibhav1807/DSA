class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int even = 0, odd = 0, min = nums1[0];
        for (int i = 0; i < nums1.size(); i++){
            if(nums1[i] % 2 == 0) even++;
            else odd++;
            if(nums1[i] < min){
                min = nums1[i];
            }
        }
        if(even == 0 || odd == 0) return true;
        if(min % 2 == 0) return false;
        return true;
    }
};