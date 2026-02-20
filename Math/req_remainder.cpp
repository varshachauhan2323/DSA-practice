#include<iostream>
using namespace std;
int main(){
    long long n,x,y,t;
    cin>>t;
    while(t--){
        cin>>x>>y>>n;
            long long k=n-(n-y)%x;
            cout<<k<<endl;
            

    }
    return 0;
}