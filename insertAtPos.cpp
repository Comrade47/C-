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

Node* insert_at_pos(Node* head,int value,int pos){
    if(head == NULL){
        if(pos == 1){
            Node* newNode = new Node(value);
            return newNode;
        }
        else{
            return head;
        }
    }

    if(pos == 1){
        Node* newNode = new Node(value);
        newNode->next = head;
        return newNode;
    }

    int counter = 0;
    Node* temp = head;

    while(temp != NULL){
        counter++;
        if(counter == pos - 1){
            Node* nodeToInsert = new Node(value);
            nodeToInsert->next = temp->next;
            temp->next = nodeToInsert;
            break;
        }
        temp = temp->next;
    }
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
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    cout << "Linked List: " << endl;
    print(head);

    cout << "After inserting 50 at 2nd position" << endl;
    head = insert_at_pos(head,50,2);
    print(head);
}