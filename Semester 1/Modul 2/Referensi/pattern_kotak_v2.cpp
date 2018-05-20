#include <iostream>

using namespace std;

int main() {

    int orig_size, size;

    orig_size = 10;

    size = (orig_size * 2);

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            bool logic_baris = (i % 2 == 0);
            bool logic_kolom = (j % 2 == 0);

            bool daerah_kiri = (j < orig_size);
            bool daerah_atas = (i < orig_size);

            bool kiri_bawah = (j <= i);
            bool kiri_atas = (j <= size - i - 1);

            bool kanan_atas = (j >= i);
            bool kanan_bawah = (j >= size - i - 1);

            bool kiri = (logic_kolom) && (kiri_bawah) && (kiri_atas);
            bool kanan = (!logic_kolom) && (kanan_atas) && (kanan_bawah);

            bool atas = (logic_baris) && (kiri_atas) && (kanan_atas);
            bool bawah = (!logic_baris) && (kiri_bawah) && (kanan_bawah);

            bool final = (kiri || kanan || atas || bawah);

            cout << (final ? "# " : "- ");
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