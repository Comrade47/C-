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
Node* insertAtTail(Node* head,int val){
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

Node* insertAtHead(Node* head,int val){
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

Node* deleteHead(Node* head){
    Node* temp = head;
    head = temp->next;
    delete temp;
    return head;
}

Node* deleteTail(Node* head){
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

Node* insertAtPos(Node* head,int pos,int val){
    Node* temp = head;
    
    if(pos < 1){
        return head;
    }

    if(pos == 1){
        Node* newNode = new Node(val);
        newNode->next = head;
        return newNode;
    }
}
int main(){
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    
    cout << "Before inserting 10!" << endl;
    print(head);

    head = insertAtTail(head,10);
    cout << "After inserting 10 at last!" << endl;
    print(head);

    head = insertAtTail(head,20);
    cout << "After inserting 20 at tail! " << endl;
    print(head);

    head = insertAtHead(head,5);
    cout << "After inserting 5 at head!" << endl;
    print(head);

    head = deleteHead(head);
    cout << "Deleting head" << endl;
    print(head);

    head = deleteTail(head);
    cout << "Deleteing tail!" << endl;
    print(head);
}