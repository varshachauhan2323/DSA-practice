#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        if(s.length() == 2){
            cout << s[1] << endl;
            continue;     }

        char mn = '9';
        for(char c : s){
            mn = min(mn, c);
        }

        cout << mn << endl;
    }
    return 0;
}