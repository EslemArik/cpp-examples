#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;


char *f(char *s) {
    int i = 0;
    char c = s[i];
    if (c == '\0')
        return s;

    bool kontrol = false;
    while (c != '\0') {
        char c1 = s[i + 1];
        if (c == c1 && i == 0) {
            s = &s[i + 2];
            kontrol = true;
        } else if (c == c1) {
            kontrol = true;
            while (s[i] != '\0') {
                s[i] = s[i + 2];
                i++;
            }
            s[i] = '\0';

        }
        i++;
        c = s[i];
    }
    if (!kontrol)
        return s;
    else
        return f(s);
}

int main() {
    cout << "dizgi oyunu" << endl;

    cout << "lutfen bir dizgi giriniz: " << endl;

    char c[100];

    cin >> c;
    cout << f(c) << endl;
}
