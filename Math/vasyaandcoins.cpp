#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        bool ok=false;
        if(a==0) {ok=true;}
        if(ok) cout<<1<<endl;
        else    cout<<a+(2*b)+1<<endl;
        
    }
    return 0;
}