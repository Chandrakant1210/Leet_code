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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> res;
        ListNode* head2=head;
        int i=1;
        while(head2){
            if(i++%2!=0)
            res.push_back(head2->val);
            head2=head2->next;
        }
        head2=head;
        i=1;
        while(head2){
            if(i++%2==0)
            res.push_back(head2->val);
            head2=head2->next;
        }
        head2=head;
        for(auto x: res){
            head2->val=x;
            head2=head2->next;
        }
        return head;
    }
};