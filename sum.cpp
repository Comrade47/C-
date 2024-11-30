#include<bits/stdc++.h>
using namespace std;

int returnSum(int *arr,int size){
    //base case
    if(size == 0){
        return 0;
    }

    if(size == 1){
        return arr[0];
    }
    int remainingPart = returnSum(arr+1,size-1);
    int sum = arr[0] + remainingPart;

    return sum;
}
int main(){
    int arr[5] ={5,3,10,13,4};
    int size = 5;

    int sum = returnSum(arr,size);

    cout << "Sum is: " << sum << endl;
}