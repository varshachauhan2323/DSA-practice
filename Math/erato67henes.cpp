#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        bool has67 = false;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x == 67) has67 = true;
        }

        if(has67) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
