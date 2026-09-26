/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    int getCount(Node* head) {
        Node* temp=head;
        int length=0;
        while(temp!=NULL){
            temp=temp->next;
            length++;
        }
        return length;
    }
};