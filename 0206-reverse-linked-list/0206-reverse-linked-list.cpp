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
    ListNode* reverseList(ListNode* head) {
        vector<int> res;
        ListNode* c=head;
        while(head){
            res.push_back(head->val);
            head=head->next;
        }
        head=c;
        int i=0;
        reverse(res.begin(),res.end());
         while(head){
            head->val=res[i++];
            head=head->next;
        }
        head=c;
        return head;
    }
};