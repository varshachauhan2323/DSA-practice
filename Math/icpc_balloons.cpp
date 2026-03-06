
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>vec(26,-1);
        int total=0;
        for(int i=0;i<s.length();i++){
            if(vec[s[i]-'a']==-1){ total+=2; vec[s[i]-'a']=1;}
            else{ total+=1;}
        }
        cout<<total<<endl;
    }
    return 0;
}
