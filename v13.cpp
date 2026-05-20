#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "Radar";
    string rev = "";

    for (int i = s.length() - 1; i >= 0; i--) {
        rev += s[i];
    }

    bool is_palindrome = true;
    for (int i = 0; i < s.length(); i++) {
        if (tolower(s[i]) != tolower(rev[i])) {
            is_palindrome = false;
            break;
        }
    }

    if (is_palindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}