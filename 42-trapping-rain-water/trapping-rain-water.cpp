class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        int left = 0, right = size - 1;
        int leftMax = height[left], rightMax = height[right];
        int water = 0;
        while(left <= right){
            if(leftMax <= rightMax){
                if(leftMax - height[left] > 0) water += leftMax - height[left];
                if(height[left] > leftMax) leftMax = height[left];
                left++;
            }
            else{
                if(rightMax - height[right] > 0) water += rightMax - height[right];
                if(height[right] > rightMax) rightMax = height[right];
                right--;
            }
        }
        return water;
    }
};