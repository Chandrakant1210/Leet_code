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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        vector<int> res;

        while(head){
        res.push_back(head->val);
        head=head->next;
       } 
       int m=res[res.size()/2];
       head=temp;
       int i=0;
       while(head){
        if(m==head->val && i>=res.size()/2)
        return head;
        i++;
        head=head->next;
       }
       return head; 
    }
};