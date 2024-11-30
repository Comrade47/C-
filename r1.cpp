#include<bits/stdc++.h>
using namespace std;


void reachHome(int src,int dest){
    
    if(src == dest){
        cout << "Reached Home" << endl;
        return;
    }

    int steps_more = dest - src;
    cout << steps_more << " Steps left!" << endl;
    src++;
    reachHome(src,dest);
}
int main(){
    int dest = 10;
    int src = 1;

    reachHome(src,dest);

}