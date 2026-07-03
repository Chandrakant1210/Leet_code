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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int> res;
        ListNode* curr=head;
        ListNode* head2=new ListNode(0);
        while(curr){
            res.push_back(curr->val);
            curr=curr->next;
        }
        res[res.size()-n]=INT_MIN;
        curr=head;
        int i=0;
        
        head=head2;
        while(i<res.size()){
            
           if(res[i]==INT_MIN){
            cout<<res[i]<<" when not insert \n";
            i++;
            continue;
           } 
           else{
            cout<<res[i]<<" when insert\n";
            ListNode* n=new ListNode(res[i]);
            i++;
            head2->next=n;
            head2=head2->next;
           }
        }
        return head->next;
    }
};