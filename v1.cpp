#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x = 3.981e-2;
    double y = -1.625e3;
    double z = 0.512 * 10;

    double a = pow(2, -x) * sqrt(x + pow(abs(y), 0.25)) * pow(exp((x - 1) / sin(z)), 1.0 / 3.0);

    cout << "Result a=" << a << endl;

    return 0;
}