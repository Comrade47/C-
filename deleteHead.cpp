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
void print(Node* head){
   Node* temp = head;
   while(temp != NULL){
       cout << temp->data << " ";
       temp = temp->next;
   }
   cout << endl;
}
Node* removeHead(Node* head){
   Node* temp = head;
   head = temp->next;
   delete temp;
   return head;
}
int main(){
   Node* head = new Node(5);
   head->next = new Node(2);
   head->next->next = new Node(3);
   head->next->next->next = new Node(4);
   head->next->next->next->next = new Node(10);
   cout << "Before deleting head" << endl;
   print(head);
   head = removeHead(head);
   cout << "Deleting head" << endl;
   print(head);
}