#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n&n-1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl; 
    }return 0;
}