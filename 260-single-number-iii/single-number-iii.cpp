class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> v;
        for (int x : nums){
            mp[x]++;
        }
        for(auto p : mp){
            if(p.second == 1) v.push_back(p.first);
        }
        return v;
    }
};