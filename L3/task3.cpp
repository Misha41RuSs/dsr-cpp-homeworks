#include <iostream>

using namespace std;

int main() {
    char c;
    do {
        cin >> c;
        if (c >= 'a' && c <= 'z') {
            cout << 'a';
        } else if (c >= 'A' && c <= 'Z') {
            cout << 'A';
        } else if (c >= '0' && c <= '9') {
            cout << '0';
        } else cout << '?';
    } while (c != '.');
    return 0;
}