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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL or head->next==NULL) return head;
        int length=0;
        ListNode* temp=head;
        while(temp!=NULL){
        temp=temp->next;
            length++;
        }
        k=k%length;
        if(k==0) return head;
        temp=head;
        ListNode* a=NULL;
        ListNode* b=NULL;      
        ListNode* c=NULL;
      
        for(int i=1;i<=length;i++){
            if(i==length-k) a=temp;
            if(i==length-k+1) b=temp;
            if(i==length) c=temp;
            temp=temp->next;
        }
        a->next=NULL;
        c->next=head;
        return b;
    }
};