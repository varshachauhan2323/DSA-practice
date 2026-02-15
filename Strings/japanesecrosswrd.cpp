#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    vector<int>segments;
    for(char c:s){
        if(c=='B') cnt++;
        else{
            if(cnt>0){
                segments.push_back(cnt);
                cnt=0;
            }
        }
    }
    if(cnt>0) segments.push_back(cnt);
    cout<<segments.size()<<endl;
    for(int val:segments){
        cout<<val<<" ";
    }
    return 0;
    
}