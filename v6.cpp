#include <iostream>

using namespace std;

int main() {
    double a = 25;
    double b = 4;
    char op;

    cin >> op;

    switch (op) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
        case '%':
            cout << (int)a % (int)b << endl;
            break;
    }

    return 0;
}