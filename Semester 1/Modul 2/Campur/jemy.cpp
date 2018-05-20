#include <iostream>
#include <math.h>

using namespace std;

main()
{
    int angka1,angka2,ukuranA,ukuranB,harga,diskon;
    char produk;
    string yesno;
    float hasil;
    char menu;
mulai:

    cout<<"a. Susu Dancow"<<endl;
    cout<<"   1. Ukuran Kecil"<<endl;
    cout<<"   2. Ukuran Sedang"<<endl;
    cout<<"   3. Ukuran Besar"<<endl;
    cout<<"b. Susu Bendara"<<endl;
    cout<<"   1. Ukuran Kecil"<<endl;
    cout<<"   2. Ukuran Sedang"<<endl;
    cout<<"   3. Ukuran Besar"<<endl;
    cout<<"c. Susu SGM"<<endl;
    cout<<"   1. Ukuran Kecil"<<endl;
    cout<<"   2. Ukuran Sedang"<<endl;
    cout<<"   3. Ukuran Besar"<<endl;
    cout<<"================================"<<endl;

    cout << "Kode Produk (a..c) : ";
    cin >> produk;
    cout << "Kode Ukuran (1..3) : ";
    cin >>ukuranA;

    switch (produk)
    {
    case 'a' :
        cout <<"Jenis Produk = Susu Dancow"<<endl;

        if (ukuranA==1)
        {
            harga=5000;
            cout<<"Ukuran       = Kecil"<<endl;
            cout<<"Harga        = "<<harga<<endl;
        }
        else if(ukuranA==2)
        {
            harga=45000;
            cout<<"Ukuran       = Sedang"<<endl;
            cout<<"Harga        = "<<harga<<endl;
        }
        else if(ukuranA==3)
        {
            harga=65000;
            cout<<"Ukuran       = Besar"<<endl;
            cout<<"Harga        = "<<harga<<endl;
        }
        else
        {
            cout<<"Anda tidak memilih ukuran!!!";
        }
        break;
    case 'b' :
        cout <<"Jenis Produk = Susu Bendera"<<endl;

        if (ukuranA==1)
        {
            harga=40000;
            cout<<"Ukuran       = Kecil"<<endl;
            cout<<"Harga        = "<<harga<<endl;
        }
        else if(ukuranA==2)
        {
            harga=55000;
            cout<<"Ukuran       = Sedang"<<endl;
            cout<<"Harga        = "<<harga<<endl;
        }
        else if(ukuranA==3)
        {
            harga=75000;
            cout<<"Ukuran       = Besar"<<endl;
            cout<<"Harga        = "<<harga<<endl;
        }
        else
        {
            cout<<"Anda tidak memilih ukuran!!!";
        }
        break;
    case 'c' :
        cout <<"Jenis Produk = Susu SGM"<<endl;

        if (ukuranA==1)
        {
            harga=64000;
            cout<<"Ukuran       = Kecil"<<endl;
            cout<<"Harga        = "<<harga<<endl;
        }
        else if(ukuranA==2)
        {
            harga=90000;
            cout<<"Ukuran       = Sedang"<<endl;
            cout<<"Harga        = "<<harga<<endl;
        }
        else if(ukuranA==3)
        {
            harga=155000;
            cout<<"Ukuran       = Besar"<<endl;
            cout<<"Harga        = "<<harga<<endl;
        }
        else
        {
            cout<<"Anda tidak memilih ukuran!!!";
        }
        break;
    default:
        cout<<"Anda tidak memilih produk";
        break;


    }


    cout<<"\nMasukan Jumlah Beli = ";
    cin>>angka1;
    cout<<"Total                 = "<<angka1*harga<<endl;
    cout<<"Diskon                = ";
    cin>>diskon;
    cout<<"Total                 = "<<(angka1*harga)-diskon<<endl;

    cout<<"================================"<<endl;


    cout<<"\n########## Terima Kasih ##########"<<endl;
}