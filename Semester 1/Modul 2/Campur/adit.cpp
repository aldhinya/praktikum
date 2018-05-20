#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Masukkan Nilai = ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            if (j % 2 == 0)
                cout << j << "";
            else
                cout << "*";
        }
        cout << endl;
    }
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            if (j % 2 == 0)
                cout << j << "";
            else
                cout << "*";
        }
        cout << "\n";
    }
}