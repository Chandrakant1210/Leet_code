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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        vector<ListNode*> res;
        ListNode* temp=headA;

        while(temp){
            res.push_back(temp);
            temp=temp->next;
        }
        temp=headB;
        int c=0;
         while(temp){
            
            if(find(res.begin(),res.end(),temp)!=res.end()){
                
            return temp;
            }
            c++;
            temp=temp->next;
        }
        return NULL;
    }
};