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
    void reorderList(ListNode* head) {
       ListNode* temp=head;
       vector<int> res;
       while(temp){
        res.push_back(temp->val);
        temp=temp->next;
       }
       int j=0,c=1;
       int i=res.size()-1;
       
       temp=head;
    //    while(i<=j){
    //     cout<<temp->val<<" one "<<res[i]<<"\n";
    //     temp->val=res[i];
    //     temp=temp->next;
    //     temp->val=res[j];
    //     i++;
    //     j--;
    //     temp=temp->next;
    //    } 

    while(temp){
        if(c%2==0){
        temp->val=res[i];
        i--;
        }
        else{
        temp->val=res[j];
        j++;
        }
        temp=temp->next;
        c++;
        
    }

    }
};