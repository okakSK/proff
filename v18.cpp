#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "Программирование это интересно";
    string glasnie = "аеёиоуыэюяАЕЁИОУЫЭЮЯ";
    string sogl = "бвгджзйклмнпрстфхцчшщБВГДЖЗЙКЛМНПРСТФХЦЧШЩ";

    int v_count = 0;
    int c_count = 0;

    for (int i = 0; i < s.length(); ) {
        if ((s[i] & 0x80) == 0) {
            i += 1;
        }
        else {
            string letter = s.substr(i, 2);

            if (glasnie.find(letter) != string::npos) {
                v_count++;
            } else if (sogl.find(letter) != string::npos) {
                c_count++;
            }

            i += 2;
        }
    }

    cout << "Гласные: " << v_count << endl;
    cout << "Согласные: " << c_count << endl;

    return 0;
}