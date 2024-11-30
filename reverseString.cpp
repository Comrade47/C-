#include<bits/stdc++.h>
using namespace std;

void reverseString(string &s,int i ,int j){

    //recursion
    if(i > j){
        return ;
    }

    swap(s[i],s[j]);
    i++;
    j--;

    reverseString(s,i,j);
}

int main(){
    string s = "Spondon";
    reverseString(s,0,s.length()-1);
    cout << s << endl;
}