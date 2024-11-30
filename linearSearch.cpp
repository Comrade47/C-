#include<bits/stdc++.h>
using namespace std;

void print(int *arr,int size){
    cout << "Size is : " << size << endl;

    for(int i = 0;i < size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool isFound(int *arr,int size,int key){
    print(arr,size);
    //base case
    if(size == 0){
        return false;
    }

    if(arr[0] == key){
        return true;
    }
    else{
        bool remainingPart = isFound(arr+1,size-1,key);
        return remainingPart;
    }

}

int main(){
    int arr[5] = {3,5,10,1,2};
    int size = 5;
    int key = 2;

    bool ans = isFound(arr,size,key);

    if(ans){
        cout << "Key is found!" << endl;
    }
    else{
        cout << "Key is not found!" << endl;
    }
}