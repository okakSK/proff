#include <iostream>

using namespace std;

int main() {
    int arr[10] = {12, 7, 5, 18, 21, 9, 14, 3, 10, 6};
    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    cout << "Чётные: " << even_count << endl;
    cout << "Нечётные: " << odd_count << endl;

    return 0;
}