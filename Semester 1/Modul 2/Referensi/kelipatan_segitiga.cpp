#include <iostream>

using namespace std;

int main() {

    int size = 9;

    for (int i = 0; i < size; ++i) {
        if (i < size / 2) {
            for (int j = 0; j < i; ++j) {
                cout << " ";
            }
        } else {
            for (int j = size - (i - size) - size - 1; j > 0; --j) {
                cout << " ";
            }
        }
        cout << 6 * (i + 1) << endl;
    }

}
/*
OUTPUT ex :
6
 12
  18
   24
    30
     36
      42
     48
    54
   60
  66
 72
78
*/