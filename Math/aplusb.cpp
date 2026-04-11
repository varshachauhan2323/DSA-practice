#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sum=0;
        int s1=s[0]-'0';
        int s2=s[2]-'0';
        sum+=s1+s2;
        cout<<sum<<endl;
    }
    return 0;
}