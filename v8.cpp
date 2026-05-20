#include <iostream>

using namespace std;

int main() {
    int n = 48;
    int count = 0;

    cout << "Делители: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            count++;
        }
    }
    cout << endl;

    cout << "Все Делителии: " << count << endl;

    return 0;
}