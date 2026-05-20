#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "HelloWorld2026";
    int uppercase = 0;
    int lowercase = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            uppercase++;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            lowercase++;
        }
    }

    cout << "Больших: " << uppercase << endl;
    cout << "маленьких: " << lowercase << endl;

    return 0;
}