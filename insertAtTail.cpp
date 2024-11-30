#include<bits/stdc++.h>
using namespace std;

class Node{
   public:
       int data;
       Node* next;

   Node(int d){
       data = d;
       next = NULL;
   }
};
Node* insertAtLast(Node* head,int val){
   Node* newNode = new Node(val);
   if(head == nullptr){
       return head;
   }
   Node* last = head;
   while(last->next != nullptr){
       last = last->next;
   }
   last->next = newNode;
   return head;
}
void print(Node* head){
   Node* temp = head;
   while(temp != NULL){
       cout << temp->data << " ";
       temp = temp->next;
   }
   cout << endl;
}
int main(){
   Node* head = new Node(2);
   head->next = new Node(3);
   head->next->next = new Node(4);
   cout << "Before inserting 10!" << endl;
   print(head);
   head = insertAtLast(head,10);
   cout << "After inserting 10 at last!" << endl;
   print(head);

   head = insertAtLast(head,20);
   cout << "After inserting 20 at tail! " << endl;
   print(head);
}