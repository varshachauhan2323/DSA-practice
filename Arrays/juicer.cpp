#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,b,d;
    cin>>n>>b>>d;
    vector<int>arr(n);
    int total=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<=b) total+=arr[i];
        if(total>d) {
            total=0;
            cnt++;
    }}
    cout<<cnt;
    return 0;
}