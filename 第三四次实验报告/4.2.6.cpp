#include <iostream>
using namespace std;
int parseHex(const char* const hexString) {
    int decimalism = 0;
    for (int i = 0; hexString[i] != '\0'; i++) {
        char hexadecimal= hexString[i];
        if (hexadecimal >= '0' && hexadecimal <= '9') {
            decimalism = decimalism * 16 + (hexadecimal - '0');
        }
        else if (hexadecimal >= 'A' && hexadecimal <= 'F') {
            decimalism = decimalism * 16 + (hexadecimal - 'A' + 10);
        }
        else {
            cout << "´íÎó" << endl;
            return -1;
        }
    }
    return decimalism;
}

int main() {
    const char* a = "A5";
    cout << parseHex(a) << endl;
    return 0;
}