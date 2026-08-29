class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0, end = numbers.size() - 1;
        while(start <= end){
            if(numbers[end] + numbers[start] > target) end--;
            else if (numbers[end] + numbers[start] < target) start++;
            else return {start+1, end+1};
        }
        return {-1};
    }
};