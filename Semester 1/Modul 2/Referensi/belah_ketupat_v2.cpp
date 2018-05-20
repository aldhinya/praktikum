#include <iostream>

using namespace std;

int main() {

    int input;

    cout << "Input angka: ";
    cin >> input;

    for (int i = 0; i < input * 2 - 1; ++i) {
        for (int j = 0; j < input * 2 - 1; ++j) {
            bool kiri_atas = (j > input - i - 1);
            bool kanan_atas = (j < input + i - 1);
            bool kiri_bawah = (j > i - input + 1);
            bool kanan_bawah = (j < input * 2 - 3 - (i - input));

            bool final = (kiri_atas && kanan_atas && kiri_bawah && kanan_bawah);

            cout << (final ? "# " : "- ");;
        }
        cout << endl;
    }

}