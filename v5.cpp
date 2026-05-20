#include <iostream>

using namespace std;

int main() {
    int sum_even = 0;
    int sum_odd = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            sum_even += i;
        } else {
            sum_odd += i;
        }
    }

    cout << "Чётных чисел: " << sum_even << endl;
    cout << "Нечётных чисел: " << sum_odd << endl;

    return 0;
}