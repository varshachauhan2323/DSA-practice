#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0;
        int j=0;
        bool ok=false;
        for(char c:s){
            if(c=='U') {
                j++;
                if(i==1&&j==1) {ok=true;
                break;}
            }
            if(c=='R'){
                i++;
                if(i==1&&j==1){ ok=true; break;}
            }
             if(c=='L'){
                i--;
                if(i==1&&j==1){ ok=true; break;}
            }
             if(c=='D'){
                j--;
                if(i==1&&j==1){ok=true; break;}
            }
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}