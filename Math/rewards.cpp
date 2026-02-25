#include <iostream>
using namespace std;

int main() {

    int c1, c2, c3;
    int m1, m2, m3;

    // Input
    cin >> c1 >> c2 >> c3;
    cin >> m1 >> m2 >> m3;

    int n;
    cin >> n;

    int totalCups = c1 + c2 + c3;
    int totalMedals = m1 + m2 + m3;

    // Ceiling division
    int cupShelves = (totalCups + 4) / 5;
    int medalShelves = (totalMedals + 9) / 10;

    if (cupShelves + medalShelves <= n)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}