class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int max_idx = 0, min_idx = 0;
        int Max = nums[0];
        int Min = nums[0];
        for(int i = 0; i < n; i++){
            if(nums[i] > Max){
                max_idx = i;
                Max = nums[i];
            }
        }
        for(int i = 0; i < n; i++){
            if(nums[i] < Min){
                min_idx = i;
                Min = nums[i];
            }
        }
        int back = max(max_idx, min_idx);
        int front = min(max_idx, min_idx);
        return min({(front + 1 + n - back), back + 1, n - front});
    }
};