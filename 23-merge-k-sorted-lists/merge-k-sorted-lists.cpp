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
    ListNode* merge(ListNode* l1, ListNode* l2){
        if(!l1) return l2;
        if(!l2) return l1;

        ListNode* head;
        if(l1->val <= l2->val){
            head = l1;
            l1 = l1->next;
        }
        else{
            head = l2;
            l2 = l2 ->next;
        }

        ListNode* tail = head;
        while(l1 && l2){
            if(l1->val <= l2->val){
                tail->next = l1;
                l1 = l1 -> next;
            }
            else{
                tail->next = l2;
                l2 = l2 -> next;
            }
            tail = tail -> next;
        }
        if(l1) tail ->next = l1;
        if(l2) tail -> next = l2;
        return head;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if(n == 0) return NULL;
        for(int i = 0; i < n - 1; i++){
            lists[i+1] = merge(lists[i], lists[i + 1]);
        }
        return lists[n-1];
    }
};