class Solution {
public:
    int hIndex(vector<int>& citations) {
        int h = 0;
        int n = citations.size();
        sort(citations.begin(), citations.end());
        for(int i = 0; i < n; i++){
            if(n - i <= citations[i]){
                h = n - i;
                break;
            }
        }
        return h;
    }
};