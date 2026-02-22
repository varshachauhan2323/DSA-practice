#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long a, b, c, n;
        cin >> a >> b >> c >> n;

        long long total = a + b + c + n;

        if(total % 3 != 0){
            cout << "NO" << endl;
        }
        else{
            long long target = total / 3;
            long long mx = max(a, max(b, c));

            if(target >= mx)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}