#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s,int i,int j){
    
    if(i > j){
        return true;
    }

    if(s[i] != s[j]){
        return false;
    }
    else{
        return true;
    }
    i++;
    j--;

    checkPalindrome(s,i,j);
}

int main(){
    string s = "abba";
    bool ans = checkPalindrome(s,0,s.length()-1);
    if(ans){
        cout << "String is palindrome!" << endl;
    }
    else{
        cout << "Not palindrome!" << endl;
    }
}