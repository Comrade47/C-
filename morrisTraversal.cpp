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
Node* buildTree(Node* root){
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;

    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter the left data of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the right data of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}
vector<int> inOrder(Node* root){
    vector<int> ans;
    while(root){
        //if left part does not exist
        if(root->left == NULL){
            ans.push_back(root->data);
            root = root->right;
        }

        //if left part exist
        else{
            Node* curr = root->left;
            while(curr->right && curr->right!= root){
                curr = curr->right;
            }

            if(curr->right == NULL){
                curr->right = root;
                root = root->left;
            }
            else{
                curr->right = NULL;
                ans.push_back(root->data);
                curr = curr->right;
            }
        }
    
    }
    return ans;
}

void print(vector<int> &a){
    for(int i = 0;i < a.size();i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){

    Node* root = NULL;
    buildTree(root);
    vector<int> ans = inOrder(root);
    print(ans);

}