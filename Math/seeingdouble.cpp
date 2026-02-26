#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        cout<<s;
        reverse(s.begin(),s.end());
        cout<<s<<endl;
        
    }
    return 0;
    
}