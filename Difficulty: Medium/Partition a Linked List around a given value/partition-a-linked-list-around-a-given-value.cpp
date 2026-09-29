/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* partition(Node* head, int x) {
    Node* dummy1=new Node(-1);
    Node* dummy2=new Node(-1);
    Node* dummy3=new Node(-1);
    Node* temp=head;
    Node* temp1=dummy1;
    Node* temp2=dummy2;
    Node* temp3=dummy3;
    while(temp!=NULL){
        Node* next=temp->next;
        temp->next=NULL;
        if(temp->data<x){
            temp1->next=temp;
            temp1=temp1->next;}
        else if(temp->data==x){
            temp2->next=temp;
            temp2=temp2->next;}
            else{
                temp3->next=temp;
                temp3=temp3->next;
            
        
        }
        
        
        
        temp=next;
    }
    if(dummy2->next!=NULL){
    temp1->next=dummy2->next;
    temp2->next=dummy3->next;}
    else{
        temp1->next=dummy3->next;
    }
        return dummy1->next;
    }
};