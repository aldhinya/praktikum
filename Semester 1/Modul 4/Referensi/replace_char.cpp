#include <iostream>

using namespace std;

char convertUpper(char c) {
    if (c >= 97 && c <= 122) {
        return char(c - 32);
    } else {
        return c;
    }
}

int main() {

    char text[32];

    cout << "input  : ";
    cin.sync();
    cin.getline(text, 32);

    int size = 0;
    while (text[size] != '\0') {
        size++;
    }

    cout << "output : ";
    for (int i = 0; i < size; ++i) {
        bool check1 = (i == 0 || text[i - 1] == ' ');
        bool check2 = (text[i + 1] == ' ' || i == size - 1);

        if (check1) {
            cout << convertUpper(text[i]);
        } else if (check2) {
            cout << '%';
        } else if (text[i] == ' ') {
            cout << '_';
        } else {
            cout << text[i];
        }
    }

}
/*
OUTPUT :
input  : Saya Suka Makan
output : Say%_Suk%_Maka%
*/