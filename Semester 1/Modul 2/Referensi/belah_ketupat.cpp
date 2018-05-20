#include <iostream>

using namespace std;

int main() {

    int input;

    cout << "input: ";
    cin >> input;

    for (int i = 0; i < input * 2; ++i) {
        for (int j = 0; j < input * 2; ++j) {
            bool check_1 = (j <= input - 1 - i);
            bool check_2 = (j >= input + i);
            bool check_3 = j <= i - input;
            bool check_4 = (j >= input * 3 - 1 - i);

            bool final = check_1 || check_2 || check_3 || check_4;

            if (final) {
                cout << "# ";
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
# # # #     # # # #                                                                                                              
# # #         # # #                                                                                                              
# #             # #                                                                                                              
#                 #                                                                                                              
#                 #                                                                                                              
# #             # #                                                                                                              
# # #         # # #                                                                                                              
# # # #     # # # #                                                                                                              
# # # # # # # # # #    
*/