#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  int value = 20;
  for (int i = 0; i < value; ++i) {
    for (int j = 0; j < value; ++j) {
      if (i == 0 || i == value - 1 || j == 0 || j == value - 1) {
        cout << "# ";
      } else if (j == value - 1 - i) {
        cout << "/ ";
      } else if (j < value - i) {
        cout << abs((i - 1 + j) % 10) << " ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
}

/*
OUTPUT :
# # # # # # # # # # # # # # # # # # # # 
# 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 / # 
# 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 /   # 
# 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 /     # 
# 4 5 6 7 8 9 0 1 2 3 4 5 6 7 /       # 
# 5 6 7 8 9 0 1 2 3 4 5 6 7 /         # 
# 6 7 8 9 0 1 2 3 4 5 6 7 /           # 
# 7 8 9 0 1 2 3 4 5 6 7 /             # 
# 8 9 0 1 2 3 4 5 6 7 /               # 
# 9 0 1 2 3 4 5 6 7 /                 # 
# 0 1 2 3 4 5 6 7 /                   # 
# 1 2 3 4 5 6 7 /                     # 
# 2 3 4 5 6 7 /                       # 
# 3 4 5 6 7 /                         # 
# 4 5 6 7 /                           # 
# 5 6 7 /                             # 
# 6 7 /                               # 
# 7 /                                 # 
# /                                   # 
# # # # # # # # # # # # # # # # # # # #
*/