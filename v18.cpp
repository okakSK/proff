#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;

    cin >> x;

    if (x < 5) {
        y = sin(x) + sqrt(abs(x - 5));
    } 
    else if (x == 5) {
        y = pow(5.45, 2) * cos(M_PI) + log(x + 2);
    } 
    else {
        y = pow(x - 5, 2) * tan(x / 2.0);
    }

    cout << y << endl;

    return 0;
}
