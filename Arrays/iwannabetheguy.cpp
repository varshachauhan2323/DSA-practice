#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    unordered_set<int>st;
    int p;
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>arr[i];
        st.insert(arr[i]);
    } 
     int q;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>arr[i];
        st.insert(arr[i]);
    } 
    if(st.size()==n) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
    return 0;

}