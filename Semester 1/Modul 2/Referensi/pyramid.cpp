#include <iostream>

using namespace std;

int main() {

    int input;

    cout << "Input angka: ";
    cin >> input;

    for (int i = 0; i < input; ++i) {
        for (int j = 0; j < input * 2; ++j) {
            bool check_1 = (i % 2 == 0) && (j % 2 == 0);
            bool check_2 = (i % 2 == 1) && (j % 2 == 1);
            bool check_3 = (j >= input - i - 1);
            bool check_4 = (j <= input + i);

            if ((check_1 || check_2) && check_3 && check_4) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

}