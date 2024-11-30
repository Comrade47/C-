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

void inOrder(Node* root){
    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

bool Search(Node* root,int target){
    if(root == NULL){
        cout << "Target " << target << " is not found!" << endl;
        return 0;
    }

    if(root->data == target){
        cout << "Target " << target << " is found!" << endl;
        return 1;
    }

    if(target < root->data){
        return Search(root->left,target);
    }
    else{
        return Search(root->right,target);
    }
}

Node* deleteNode(Node* root,int target){
    if(root == NULL){
        return ;
    }

    if(target < root->data){
        root->left = deleteNode(root->left,target);
        return root;
    }

    else if(target > root->data){
        root->right = deleteNode(root->right,target);
        return root;
    }

    else{
        //leaf node
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        //one child 
        else if(root->right == NULL){
            //left exist
            Node* temp = root->left;
            delete root;
            return temp;
        }

        else if(root->left == NULL){
            Node* temp = root->right;//right exist
            delete root;
            return temp;
        }
        // both child

        else{
            //find the greatest element from left
            Node* child = root->left;
            Node* parent = root;

            // rightmost node
            while(child->right != NULL){
                parent = child;
                child = child->right;
            }

            if(root != parent){
                parent->right = child->left;
                child->left = root->left;
                child->right = root->right;
                delete root;
                return child;
            }
            else{
                child->right = root->right;
                delete root;
                return child;
            }
        }
    }
}
int main(){

    Node* root = NULL;
    int arr[] = {10,20,30,40};
    for(int i =0; i < 4;i++){
        root = insert(root,arr[i]);
    }
    

    cout << "Printing elements in Inorder format: " << endl;
    inOrder(root);
    cout << endl;
    Search(root,5);
}