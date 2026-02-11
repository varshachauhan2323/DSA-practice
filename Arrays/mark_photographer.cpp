#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int x;
        cin>>n>>x;
        vector<int>h(2*n);
        for(int i=0;i<2*n;i++){
            cin>>h[i];
        }
        sort(h.begin(),h.end());
        bool possible=true;
        for(int i=0;i<n;i++){
            if(h[i+n]-h[i]<x){
                possible=false;
                break;
                
            }
            
        }
        if(possible){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}