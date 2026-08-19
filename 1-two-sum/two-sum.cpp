class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> arr;
        for(int i = 0; i < nums.size(); i++){
            arr.push_back({nums[i], i});
        }
        sort(arr.begin(), arr.end());

        int start = 0, end = nums.size() - 1;
        while(start <= end){
            int sum = arr[end].first + arr[start].first;
            if(sum > target){
                end--;
            }
            else if(sum < target){
                start++;
            }
            else{
                return {arr[start].second, arr[end].second};
            }
        }
        return {0, 0};
    }
};