/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode* , int> res;
        while(head){
            if(res[head]==1)
            return 1;
            else
            {
                res[head]++;
            }
            head=head->next;
        }
        return 0;
    }
};