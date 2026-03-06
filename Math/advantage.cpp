#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long>a(n), b;
        for(auto &x:a) cin>>x;

        b = a;
        sort(b.begin(), b.end());

        long long mx = b[n-1];
        long long smx = b[n-2];

        for(auto x:a){
            if(x==mx) cout<<x-smx<<" ";
            else cout<<x-mx<<" ";
        }
        cout<<endl;
    }
}