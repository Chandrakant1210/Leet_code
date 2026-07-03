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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode* head=new ListNode(0);
         ListNode* head2=head;
         int c=0,t=0;
         while(l1 || l2 || c){
            t=c;
            if(l1){
                t+=l1->val;
                l1=l1->next;
            }
            if(l2){
                t+=l2->val;
                l2=l2->next;
            }
            int num=t%10;
            c=t/10;
            ListNode* temp=new ListNode(num);
            head->next=temp;
            head=head->next;
            
         }
         return head2->next;
    }
};