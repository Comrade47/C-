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
        return NULL;
    }

    if(val < root->data){
        root->left = insert(root->left,val);
    }
    else{
        root->right = inser(root->right,val);
    }

    return root;
}

bool checkBST(Node* root){
    if(root != NULL){
        if(root > root->left && root < root->right){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int main(){

}