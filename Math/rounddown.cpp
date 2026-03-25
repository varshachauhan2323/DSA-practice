#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long m;
        cin>>m;
        
        long long base = 1;

while(base * 10 <= m){
    base *= 10;
}

cout << m - base << endl;
    }
    return 0;
}