#include<iostream>
#include<string>
using namespace std;
int main(){
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.length();i++){
        int j=s[i]-'0';
        if(j==1) sum+=a1;
        else if(j==2) sum+=a2;
        else if(j==3) sum+=a3;
        else if(j==4) sum+=a4;
    }
    cout<<sum;
    return 0;
}