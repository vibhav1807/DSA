class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 1) continue;
            s.insert(nums[i]);
        }
        if(s.empty()) return 1;
        
        int maxm = *(max_element(nums.begin(), nums.end()));
        int minm = maxm;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 1) continue;
            if(nums[i] < minm){
                minm = nums[i];
            }
        }
        if(minm > 1) return 1;
        for(int i = minm; i <= maxm; i++){
            if(s.find(i) == s.end()) return i;
        }
        return maxm+1;
    }
};