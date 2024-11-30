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
Node* removeTail(Node* head){
   if(head == nullptr){
       return nullptr;
   }
   if(head->next == nullptr){
       delete head;
       return nullptr;
   }
   Node* before_last = head;
   while(before_last->next->next != nullptr){
       before_last = before_last->next;
   }
   delete(before_last->next);
   before_last->next = nullptr;
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
   Node* head = new Node(5);
   head->next = new Node(2);
   head->next->next = new Node(3);
   head->next->next->next = new Node(4);
   head->next->next->next->next = new Node(10);
   cout << "Before deleting the tail! " << endl;
   print(head);
   head = removeTail(head);
   cout << "Deleteing tail!" << endl;
   print(head);
}