class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0, area = 0;
        int start = 0, end  = height.size() - 1;
        while(start <= end){ 
            area = min(height[start], height[end]) * (end - start);
            if(height[start] < height[end]) start++;
            else end--;

            if(max < area) max = area;
        }
        return max;
    }
};