#include <iostream>
#include <string>

using namespace std;

int main() {
    string email = "student_01@mail.ru";

    int pos = email.find('@');
    string login = email.substr(0, pos);

    cout << "Логин: " << login << endl;

    return 0;
}