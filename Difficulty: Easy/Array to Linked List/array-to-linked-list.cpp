/* Linked List Node Structure
class Node {
public:
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node* arrayToList(vector<int>& arr) {
       
      Node* head=new Node(arr[0]);
       Node* newll=head;
        for(int i=0;i<arr.size()-1;i++){
            Node* a=new Node(arr[i+1]);
            newll->next=a;
            newll=newll->next;
            
        }
        
        return head;
    }
};