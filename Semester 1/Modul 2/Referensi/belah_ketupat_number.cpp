#include <iostream>

using namespace std;

int main() {

    int input;

    cout << "input: ";
    cin >> input;

    for (int i = 0; i < input * 2 - 1; ++i) {
        for (int j = 0; j < input * 2 - 1; ++j) {

            bool atas = (j >= input - i - 1) && (j <= input + i - 1);
            bool bawah = (j >= i - input + 1) && (j <= input * 3 - i - 3);

            bool final = (atas && bawah);

            bool setengah = (i < input);

            int angka = (setengah ? (i + 1) : (input * 2) - i - 1) % 10;

            if (final) {
                cout << angka << ' ';
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

}