#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        s=s+s;  // circular string 
        if(c=='g') {cout<<0<<endl;continue;}
        int nextgreen=-1;
        int maxdist=0;
        for(int i=2*n-1;i>=0;i--){
            if(s[i]=='g') nextgreen=i;
            if(s[i]==c&&i<n){
                maxdist=max(maxdist,nextgreen-i);
            }
        }
        cout<<maxdist<<endl;
        
    }
    return 0;
}