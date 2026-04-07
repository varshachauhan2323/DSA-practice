#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int swaps = (n + 1) / 2;
        cout << swaps << "\n";

        int left = 2;
        int right = 3 * n;

        for (int i = 0; i < swaps; i++) {
            cout << left << " " << right << "\n";
            left += 3;
            right -= 3;
        }
    }

    return 0;
}