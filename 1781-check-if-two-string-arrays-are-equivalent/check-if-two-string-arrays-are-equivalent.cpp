class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n1 = word1.size();
        int n2 = word2.size();
        for(int i = 1; i < n1; i++){
            word1[0].append(word1[i]);
        }
        for(int i = 1; i < n2; i++){
            word2[0].append(word2[i]);
        }
        if(word1[0] == word2[0]) return true;
        return false;
    }
};