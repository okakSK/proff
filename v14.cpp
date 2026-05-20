#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "Я люблю язык C++";
    string result = "";
    int start = 0;

    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            int j = i;
            while (j > start) {
                if (j - 1 >= start && (s[j - 1] & 0x80) == 0) {
                    result += s[j - 1];
                    j -= 1;
                }
                else if (j - 2 >= start) {
                    result += s.substr(j - 2, 2);
                    j -= 2;
                }
            }

            if (i < s.length()) {
                result += " ";
            }
            start = i + 1;
        }
    }

    cout << result << endl;

    return 0;
}