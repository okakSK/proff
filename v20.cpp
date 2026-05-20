#include <iostream>
#include <string>

using namespace std;

int main() {
    string date = "2026-05-08";

    string year = date.substr(0, 4);
    string month = date.substr(5, 2);
    string day = date.substr(8, 2);

    cout << "Год: " << year << endl;
    cout << "Месяц: " << month << endl;
    cout << "День: " << day << endl;

    return 0;
}