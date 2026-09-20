class Solution {
public:
// deg(x) = 2a - x - 71
    int reverseDegree(string s) {
        int deg = 0;
        for(int i = 0; s[i] != '\0';i++){
            deg += ((2*int('a') - int(s[i]) - 71) * (i+1));
        }
        return deg;
    }
};