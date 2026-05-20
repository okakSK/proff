#include <iostream>

using namespace std;

int main() {
    int n = 74829;

    int d1 = n % 10;
    int d2 = (n / 10) % 10;
    int d3 = (n / 100) % 10;
    int d4 = (n / 1000) % 10;
    int d5 = n / 10000;

    int rev = d1 * 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5;

    cout << "Result: " << rev << endl;

    return 0;
}