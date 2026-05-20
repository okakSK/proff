#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "Компьютерные сети очень важны";
    string result = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            result += s[i];
        }
    }

    cout << result << endl;

    return 0;
}