#include<iostream>
using namespace std;
int main(){
    int k;
    cin>>k;
    long long l;
    cin>>l;
    int cnt=0;
    while(l%k==0){
        l/=k;
        cnt++;
    }
    if(l==1){
        cout<<"YES"<<endl;
        cout<<cnt-1;
    }
    else{
        cout<<"NO";
    }
    return 0;
}