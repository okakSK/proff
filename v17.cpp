#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1 = "triangle";
    string s2 = "integral";

    int counts1[256] = {0};
    int counts2[256] = {0};

    for (int i = 0; i < s1.length(); i++) {
        counts1[(unsigned char)s1[i]]++;
    }

    for (int i = 0; i < s2.length(); i++) {
        counts2[(unsigned char)s2[i]]++;
    }

    bool is_anagram = true;
    for (int i = 0; i < 256; i++) {
        if (counts1[i] != counts2[i]) {
            is_anagram = false;
            break;
        }
    }

    if (is_anagram && s1.length() == s2.length()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}