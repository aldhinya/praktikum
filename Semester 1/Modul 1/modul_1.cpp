#include <iostream>

using namespace std;

int main()
{
    int hargaPerbuku, hargaKeuntungan;
    int jumlahBuku=24;
    int hargaBuku=400000;
    float keuntungan=0.1;

    hargaKeuntungan=hargaBuku*keuntungan+hargaBuku;
    hargaPerbuku=hargaKeuntungan/jumlahBuku;

    cout << "Harga Total Buku = Rp. "<<hargaBuku<<endl;
    cout << "Keuntungan yang ingin didapatkan = 10%"<<endl;
    cout << "\nHarga Total Buku + 10% = " <<hargaKeuntungan<< endl;
    cout << "Harga Jual Perbuku = Rp. "<<hargaPerbuku<<endl;
    return 0;
}