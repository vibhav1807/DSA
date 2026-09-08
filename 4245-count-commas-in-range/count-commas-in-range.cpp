class Solution {
public:
    int countCommas(int n) {
        int diff = n - 1000;
        if(diff < 0) return 0;
        return diff+1;
    }
};