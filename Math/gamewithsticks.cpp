#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    int totalmoves=min(n,m);
    if(totalmoves%2==1) cout<<"Akshat";
    else cout<<"Malvika";
    return 0;
    
}