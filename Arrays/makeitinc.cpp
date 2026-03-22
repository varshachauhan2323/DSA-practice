#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long >arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool possible=true;
        int ops=0;
        for(int i=n-2;i>=0;i--){
            while(arr[i]>=arr[i+1]){
                if(arr[i]==0){
                    possible=false;
                    break;
                }
                arr[i]/=2;
                ops++;
            }
                            if(!possible) break;

        }
       
        if(possible) cout<<ops<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}