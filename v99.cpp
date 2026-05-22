#include <iostream>

int main() {
    int arr[] = {7, 33, 5, 18, 42, 1, 26, 9, 15, 38};
    int size = 10;

    for (int i = size - 1; i >= 0; i--) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
