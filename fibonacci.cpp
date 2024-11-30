#include<bits/stdc++.h>
using namespace std;


int fib(int number){

    if(number == 0){
        return number;
    }

    if(number == 1){
        return number;
    }

    return fib(number-1)+fib(number-2);
}

int fibonacci(int n){
    if(n <= 1){
        return n;
    }

    int a = 0,b=1;
    for(int i = 2;i <= n;i++){
        int temp = b;
        b = a + b;
        a = temp;
    }

    return b;
}
int main(){

    int n;
    cout << "Enter the number for fibonacci series: ";
    cin >> n;

    int ans = fib(n);
    cout << "Ans" << ans << endl;

    int ans2 = fibonacci(n);
    cout << "Optimized Solution: " << ans2 << endl;

}