#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int d=abs(b-a);
        int n =2*d;
        if(a>n||b>n||c>n||a==b) {cout<<-1<<endl; continue;}
        if(c+d<=n) cout<<c+d<<endl;
        else cout<<c-d<<endl;
        
    }
    return 0;
}