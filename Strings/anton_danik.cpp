#include<iostream>
#include<string>
using namespace std;
int main(){
    long long n;
    cin>>n;
    string s="";
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        s+=c;
    }
    int a=0;
    int d=0;
    for(char ch:s){
        if(ch=='A') a++;
        else d++;
    }
    if((a-d)>0) cout<<"Anton";
    else if((a-d)<0) cout<<"Danik";
    else cout<<"Friendship";
    return 0;
}