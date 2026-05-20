#include <iostream>

using namespace std;

int main() {
    int n = 1221;

    int d1 = n / 1000;
    int d2 = (n / 100) % 10;
    int d3 = (n / 10) % 10;
    int d4 = n % 10;

    if (d1 == d4 && d2 == d3) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}