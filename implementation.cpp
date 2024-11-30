#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
    
    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root,int val){
    if(root == NULL){
        Node* temp = new Node(val);
        return temp;
    }

    if(val < root->data){
        root->left = insert(root->left,val);
    }

    if(val > root->data){
        root->right = insert(root->right,val);
    }

    return root;
}
void preOrder(Node* root){
    if(root == NULL){
        return ;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

bool isFound(Node* root,int target){
    if(root == NULL){
        return 0;
    }

    if(root->data == target){
        return 1;
    }

    if(target < root->data){
        return isFound(root->left,target);
    }
    if(target > root->data){
        return isFound(root->right,target);
    }
}
int main(){

    int arr[] = {3,7,4,1,6,8};
    Node* root = NULL;
    for(int i = 0; i < 6;i++){
        root = insert(root,arr[i]);
    }
    
    preOrder(root);
    cout << endl;
    bool ans = isFound(root,20);
    if(ans){
        cout << "Key Found! " << endl;
    }
    else{
        cout << "Not found!" << endl;
    }
}