#include <iostream>

using namespace std;

int main() {
    int n = 5384;

    int d1 = n / 1000;
    int d2 = (n / 100) % 10;
    int d3 = (n / 10) % 10;
    int d4 = n % 10;

    int sum = d1 + d2 + d3 + d4;
    int prod = d1 * d2 * d3 * d4;

    cout << "Sum: " << sum << endl;
    cout << "Product: " << prod << endl;

    return 0;
}