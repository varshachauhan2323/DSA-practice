#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>arr(7);
        for(int i=0;i<7;i++){
            cin>>arr[i];
        }
        long long a=arr[0];
        long long  b=arr[1];
        long long  c=arr[6]-arr[0]-arr[1];
        cout<<a<<" "<<b<<" "<<c<<endl;
        
    }
    return 0;
}