#include <iostream>

using namespace std;

int main() {

    int input;

    cout << "input: ";
    cin >> input;

    for (int i = 0; i < input * 2; ++i) {
        for (int j = 0; j < input * 4 - 1; ++j) {
            bool pola = (i % 2 == 0) ? (j % 2 == 0) : (j % 2 == 1);

            bool tengah = (pola && j == input * 2 - 1);
            bool kiri = (j >= i) && (j < input * 2);
            bool kanan = (j <= input * 4 - 1 - i) && (j >= input * 2);

            bool final = pola && (kiri || kanan);

            if (final) {
                if (tengah) {
                    cout << "V";
                } else if (kiri) {
                    cout << "\\";
                } else if (kanan) {
                    cout << "/";
                }
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

}