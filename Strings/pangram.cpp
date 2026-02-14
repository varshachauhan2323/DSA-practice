#include<iostream>
#include<set>
#include<string>
using namespace std;
int main(){
    int x;
    cin>>x;
    string s="";
    set<int>st;
    while(x--){
        char c;
        cin>>c;
        if(c>='A'&&c<='Z'){
            c+=32;
        }
        s+=c;
        st.insert(c);
        
    }
    if(st.size()==26) cout<<"YES";
    else cout<<"NO";
    return 0;
    
}