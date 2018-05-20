#include <iostream>

using namespace std;

int main() {

    int input;

    cout << "input: ";
    cin >> input;

    for (int i = 0; i < input * 2; ++i) {
        for (int j = 0; j < input * 2; ++j) {
            bool borders = i == 0 || j == 0 || i == input * 2 - 1 || j == input * 2 - 1;
            bool contents = (i >= 2 && i <= input * 2 - 3) && (j >= 2 && j <= input * 2 - 3);
            bool cross = (i == j) || (j == input * 2 - 1 - i);

            bool final = borders || contents;

            if (final) {
                if (contents) {
                    if (cross) {
                        cout << "  ";
                    } else {
                        cout << (i - 1) % 10 << " ";
                    }
                } else {
                    cout << "# ";
                }
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

}
/*
OUTPUT :
# # # # # # # # # #                                                                                                            
#                 #                                                                                                            
#     1 1 1 1     #                                                                                                            
#   2   2 2   2   #                                                                                                            
#   3 3     3 3   #                                                                                                            
#   4 4     4 4   #                                                                                                            
#   5   5 5   5   #                                                                                                            
#     6 6 6 6     #                                                                                                            
#                 #                                                                                                            
# # # # # # # # # # 
*/