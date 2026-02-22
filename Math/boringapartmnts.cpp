#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int digit=s[0]-'0';
        int len=s.length();
        cout<<(digit-1)*10+(len*(len+1))/2<<endl;
    }
    return 0;
}