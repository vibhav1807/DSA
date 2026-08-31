/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> v;
        ListNode* prev = head;
        ListNode* curr = head -> next;
        int idx = 1;
        while(curr->next){
            if((curr->val<prev ->val && curr->val<curr->next->val) || (curr->val>prev->val && curr->val>curr->next->val)){
                //critical point
                v.push_back(idx);
            }
            idx++;
            curr = curr->next;
            prev = prev ->next;
        }
        if(v.size() == 2) return {v[1] - v[0], v[1] - v[0]};
        else if(v.size() > 2){
            int minm = v[v.size() - 1];
            for(int i = 0; i < v.size() - 1; i++){
                int diff = v[i+1] - v[i];
                if(diff < minm){
                    minm = diff;
                }
            }
            int maxm = v[v.size() - 1] - v[0];
            return {minm, maxm};
        }
        return {-1, -1};
    }
};