#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int arr[4];
        for(int i=1;i<4;i++){
            cin>>arr[i];
        }
        int cnt=0;
        while(x!=0){
            x=arr[x];
            cnt++;
        }
        if(cnt==3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}