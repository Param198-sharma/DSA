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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        ListNode* temp1=head;
        for(int i=0;temp1!=NULL;i++){
            if(temp->val==temp1->val){
                temp1=temp1->next;
               }
            else{temp->next=temp1;
            temp=temp1;

            }
        }
      if(temp!=NULL)  temp->next=NULL;
        return head;
        
    }
};