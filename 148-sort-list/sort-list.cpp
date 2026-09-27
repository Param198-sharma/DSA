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
 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* d=new ListNode(-1);
        ListNode* i=list1;
        ListNode* j=list2;
        ListNode* k=d;
        
        while(i!=NULL&&j!=NULL)
        {
            if(i->val<j->val){
                k->next=i;
                k=k->next;
                i=i->next;}
            else{
                k->next=j;
                j=j->next;
                k=k->next;
            }
        }
        if(j==NULL) k->next=i;
        else k->next=j;
        return d->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL or head->next==NULL) return head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* a=slow->next;
        slow->next=NULL;
        head=sortList(head);
        a=sortList(a);
        return mergeTwoLists(head,a);
        
    }
};