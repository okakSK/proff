#include <iostream>

using namespace std;

int main() {
    int n = 8;
    int factorial = 1;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << "Factorial: " << factorial << endl;

    return 0;
}