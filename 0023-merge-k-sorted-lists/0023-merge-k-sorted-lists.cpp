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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* temp=new ListNode (0);
        ListNode* result=temp;
        vector<int> res;
        
        if(lists.empty())
        return nullptr;
        for(int i=0;i<lists.size();i++){
            temp=lists[i];
           
            while(temp){
        
                res.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(res.begin(),res.end());
       temp=result;

       for(int i=0;i<res.size();i++){
        ListNode* val=new ListNode(res[i]);
        temp->next=val;
        temp=temp->next;
        
       }
   
        return result->next;
      
    }
};