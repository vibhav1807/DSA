class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string best = "";
        int l = -1, r = 0;
        int count = 0;
        while(s[r] != '\0'){
            if(s[r] == '1') count++;
            while(count == k){
                l++;
                if(s[l] == '1') count--;
                string temp = s.substr(l, r - l + 1);
                if(best.empty() || temp.size() < best.size()){
                    best = temp;
                }
                else if(temp.size() == best.size() && temp < best){
                    best = temp;
                }
            }
            r++;
        }
        return best;
    }
};