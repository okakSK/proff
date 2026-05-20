#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "programminglanguage";
    int counts[256] = {0};

    for (int i = 0; i < s.length(); i++) {
        counts[(unsigned char)s[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (counts[i] > 0) {
            cout << (char)i << ": " << counts[i] << endl;
        }
    }

    return 0;
}