#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "successfully";
    int counts[256] = {0};

    for (int i = 0; i < s.length(); i++) {
        counts[(unsigned char)s[i]]++;
    }

    char max_char = s[0];
    int max_count = counts[(unsigned char)s[0]];

    for (int i = 0; i < 256; i++) {
        if (counts[i] > max_count) {
            max_count = counts[i];
            max_char = (char)i;
        }
    }

    cout << "Max char: " << max_char << " (" << max_count << " times)" << endl;

    return 0;
}