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
    else{
        root->right = insert(root->right,val);
    }
    return root;
}

Node* deletion(Node* root,int target){
    if(root == NULL){
        return NULL;
    }

    if(target < root->data){
        root->left = deletion(root->left,target);
    }
    
    else if(target > root->data){
        root->right = deletion(root->right,target);
    }

    else{
        if(root->right == NULL && root->left == NULL){
            delete root;
            return NULL;
        }
        else if(root->right == NULL){
            //left is present
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else if(root->left == NULL){
            //right is present
            Node* temp = root->right;
            delete temp;
            return temp;
        }

        else{
            //2 child is present
            Node* parent = root;
            Node* largest = root->left;

            while(largest->left){
                root = largest;
                largest = largest->right;
            }

            if(root!=parent){
                parent->right = root->left;
                largest->left = root->left;
                largest->right = root->right;
                delete root;
                return largest;
            }
            else{
                largest->right = root->right;
                delete root;
                return largest;
            }
        }
    }

}
int main(){

    

}
