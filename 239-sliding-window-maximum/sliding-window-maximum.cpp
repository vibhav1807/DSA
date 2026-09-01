class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> d;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            while(!d.empty() && nums[i] >= nums[d.back()]){
                d.pop_back();
            }
            d.push_back(i);
            if(d.front() <= i - k){
                d.pop_front();
            }
            if(i >= k -1){
                result.push_back(nums[d.front()]);
            }
        }
        return result;
    }
};