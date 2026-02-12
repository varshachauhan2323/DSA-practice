#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    reverse(s.begin(),s.end());
    if(s==t) cout<<"YES";
    else{cout<<"NO";
}
return 0;
}