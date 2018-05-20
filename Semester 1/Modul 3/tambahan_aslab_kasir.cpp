#include <iostream>
#include <iomanip>

using namespace std;

int no, harga[3]= {7000, 2000, 4000}, bayar, seluruh, kembalian, kurang, total[3], banyak, jumlah[3];
string barang[3] = {"Buku", "Pensil", "Bulpoin"};

int main()
{
    cout<<"==================================================================="<<endl;
    cout<<setw(36)<<"DAFTAR BARANG"<<endl;
    cout<<setw(46)<<"TOKO PERLENGKAPAN SEKOLAH ASIQUE"<<endl;
    cout<<"==================================================================="<<endl<<endl;
    cout<<"PILIH BARANG : "<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"1. "<<barang[0]<<"\t\t: Rp. "<<harga[0]<<endl;
    cout<<"2. "<<barang[1]<<"\t: Rp. "<<harga[1]<<endl;
    cout<<"3. "<<barang[2]<<"\t: Rp. "<<harga[2]<<endl;
    cout<<"4. Checkout"<<endl;
    cout<<"----------------------------------------------"<<endl;
    do
    {
        cout<<"> Pilih Nomor \t= ";
        cin>>no;
        switch (no)
        {
        case 1:
            cout<<"----------------------------------------------"<<endl;
            cout<<"Nama Barang\t\t= "<<barang[0]<<endl;
            cout<<"Banyak \t\t\t= ";
            cin>>banyak;
            jumlah[0]+=banyak;
            total[0] = harga[0]*jumlah[0];
            cout<<"Total "<<banyak<<" "<<barang[0]<<"\t\t= Rp. "<<total[0]<<endl;
            cout<<"----------------------------------------------"<<endl;
            break;
        case 2:
            cout<<"----------------------------------------------"<<endl;
            cout<<"Nama Barang\t\t= "<<barang[1]<<endl;
            cout<<"Banyak \t\t\t= ";
            cin>>banyak;
            jumlah[1]+=banyak;
            total[1] = harga[1]*jumlah[1];
            cout<<"Total "<<banyak<<" "<<barang[1]<<"\t\t= Rp. "<<total[1]<<endl;
            cout<<"----------------------------------------------"<<endl;
            break;
        case 3:
            cout<<"----------------------------------------------"<<endl;
            cout<<"Nama Barang\t\t= "<<barang[2]<<endl;
            cout<<"Banyak \t\t\t= ";
            cin>>banyak;
            jumlah[2]+=banyak;
            total[2] = harga[2]*jumlah[2];
            cout<<"Total "<<banyak<<" "<<barang[2]<<"\t\t= Rp. "<<total[2]<<endl;
            cout<<"----------------------------------------------"<<endl;
            break;
        case 4:
            cout<<"SELESAI"<<endl;
            break;
        default:
            cout<<"Masukkan Nomor yang Benar!"<<endl;
            cout<<"----------------------------------------------"<<endl;
            break;
        }
    }while(no!=4);

    cout<<"=============================================="<<endl;
    cout<<setw(26)<<"Pembayaran"<<endl;
    cout<<"=============================================="<<endl;
    cout<<"Barang yang Anda Beli :"<<endl<<endl;
    for (int i=0; i<3; i++)
    {
        if(jumlah[i]>0)
        {
            cout<<"> "<<barang[i]<<" x "<<jumlah[i]<<" = Rp. "<<total[i]<<endl;
        }
    }
    cout<<"----------------------------------------------"<<endl;
    seluruh=total[0]+total[1]+total[2];
    do
    {
        cout<<"Total Harga = Rp. "<<seluruh<<endl;
        cout<<"Uang Anda = Rp. ";
        cin>>bayar;
        cout<<"----------------------------------------------"<<endl;
        if (bayar>=seluruh)
        {
            kembalian=bayar-seluruh;
            cout<<"Kembalian = Rp. "<<kembalian<<endl;
        }
        else
        {
            kurang=seluruh-bayar;
            cout<<"Uang Anda Kurang Rp. "<<kurang<<endl;
            cout<<"----------------------------------------------"<<endl;
        }
    }
    while(bayar<seluruh);
    cout<<"----------------------------------------------"<<endl;
    return 0;
}