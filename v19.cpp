#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    
    cin >> name;
    
    if (name.length() < 7) {
        cout << "короткое имя" << endl;
    } else {
        cout << "длинное имя" << endl;
    }
    
    return 0;
}
