#include <iostream>

using namespace std;

int main() {

    int orig_size, size;
    char pattern1[] = "# ";
    char pattern2[] = "- ";

    cout << "input size: ";
    cin >> orig_size;

    size = (orig_size * 2);

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            bool kiri_atas = (j <= size - i - 1);
            bool kanan_bawah = (j >= size - i - 1);

            bool kiri = (j % 2 == 0) && ((i >= j) && kiri_atas);
            bool kanan = (j % 2 == 1) && ((i <= j) && kanan_bawah);

            bool atas = (i % 2 == 0) && ((i <= j) && kiri_atas);
            bool bawah = (i % 2 == 1) && ((i >= j) && kanan_bawah);

            bool final = ((i < size / 2 ? atas : bawah)
                          || (j < size / 2 ? kiri : kanan));

            cout << (final ? pattern1 : pattern2);
        }
        cout << endl;
    }

}
/*
OUTPUT :
# # # # # # # # # #                                                                                                              
# - - - - - - - - #                                                                                                              
# - # # # # # # - #                                                                                                              
# - # - - - - # - #                                                                                                              
# - # - # # - # - #                                                                                                              
# - # - # # - # - #                                                                                                              
# - # - - - - # - #                                                                                                              
# - # # # # # # - #                                                                                                              
# - - - - - - - - #                                                                                                              
# # # # # # # # # # 
*/