class Solution {
public:
    int maxDepth(string s) {
        int max = 0, temp = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                temp++;
                if(temp > max) max = temp;
            };
            if(s[i] == ')'){
                temp--;
            }
        }
        return max;
    }
};