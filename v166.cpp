#include <iostream>
#include <cmath>

int main() {
    double x = 3.251;
    double y = 0.325;
    double z = 0.466 * std::pow(10, -4);
    
    double pi = 3.14159265358979323846;

    double part1 = std::pow(2, std::pow(y, x));
    double part2 = std::pow(std::pow(3, x), y);
    
    double numerator = y * (std::atan(z) - pi / 6.0);
    double denominator = std::abs(x) + 1.0 / (y * y + 1.0);
    
    double c = part1 + part2 - (numerator / denominator);

    std::cout << "result c = " << c << std::endl;

    return 0;
}
