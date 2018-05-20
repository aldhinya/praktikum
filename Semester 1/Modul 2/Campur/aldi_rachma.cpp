
#include <iostream>

using namespace std;

int main()
{
    int a, b, i, j, n, z;
    int val1, val2, val3, val4, val5;

    cout << "Masukkan nilai     : ";
    cin >> n;
    cout << endl;
    cout << "\t\t\t\t";

    // Membentuk bagian atas
    for (i = n; i > 0; i--) {
        // Membentuk spasi kosong di depan angka
        val1 = i - 1;
        for (j = 1; j <= val1; j++) {
            cout << " ";
        }

        // Membentuk angka setelah spasi
        val2 = n - val1;
        for (a = 1; a <= val2; a++) {
            cout << a;
        }

        // Membentuk angka perulangan setelah batas tengah
        val3 = val2 - 1;
        for (b = val3; b >= 1; b--) {
            cout << b;
        }

        cout << endl;
        cout << "\t\t\t\t";
    }

    // Membentuk bagian bawah
    z = n - 1;
    for (i = z; i > 0; i--) {
        val4 = n - i;
        for (j = 1; j <= val4; j++) {
            cout << " ";
        }

        for (a = 1; a <= i; a++) {
            cout << a;
        }

        val5 = i - 1;
        for (b = val5; b >= 1; b--) {
            cout << b;
        }

        cout << endl;
        cout << "\t\t\t\t";
    }

    cout << endl;
    cout << endl;

    return 0;
}