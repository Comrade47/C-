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
Node* insertAtFirst(Node* head,int val){
   Node* newNode = new Node(val);
   newNode->next = head;
   return newNode;
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
   head->next->next->next = new Node(10);
   cout << "Before inserting element at head" << endl;
   print(head);
   head = insertAtFirst(head,5);
   cout << "After inserting 5 at head!" << endl;
   print(head);

}