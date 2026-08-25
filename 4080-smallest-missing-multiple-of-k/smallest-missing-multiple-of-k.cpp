class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set s(nums.begin(), nums.end());
        int i = 1;
        while(true){
            if(s.find(i * k) == s.end()){
                return i*k;
            }
            i++;
        }
    }
};