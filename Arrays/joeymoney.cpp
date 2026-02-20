#include<iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        long long product=1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            product*=(long long)arr[i];
        }
        long long ans=product+(n-1);
        cout<<2022*ans<<endl;
        
        
    }
 
    return 0;
}