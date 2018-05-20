#include <iostream>
#include <math.h>
#include <limits>

using namespace std;

main()
{
    int angka,angka1,angka2;
    string yesno;
    float hasil;
    char menu;
mulai:

    cout<<"============================"<<endl;
    cout<<"Pilih Salah Satu :"<<endl;
    cout<<"============================"<<endl;
    cout<<"1. Luas Lingkaran"<<endl;
    cout<<"2. Luas Kerucut"<<endl;
    cout<<"3. Keliling Persegi Panjang"<<endl;
    cout<<"============================"<<endl;
    while (cout << "Pilih Menu : " && !(cin >> angka))
    {
        cout << "Silahkan Masukkan Angka !! " << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Anda Memilih Menu Nomor " <<angka<< endl;
    cout<<"============================"<<endl;


    switch (angka)
    {
    case 1 :
        while (cout << "Masukkan jari-jari : " && !(cin >> angka1))
        {
            cout << "Silahkan Masukkan Angka" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        hasil = 3.14*pow (angka1,2);
        cout<<"Hasilnya adalah : "<<hasil<<endl;
        break;

    case 3 :
        cout<<"Masukkan Panjang : ";
        cin>>angka1;
        cout<<"Masukkan Lebar : ";
        cin>>angka2;
        hasil = 2*(angka1+angka2);
        cout<<"Hasil : "<<hasil<<endl;
        break;

    case 2 :
        cout<<"Apakah sisi sudah diketahui ? (y/t) :"<<endl;
        cin>>yesno;
        if (yesno == "y")
        {
            cout<<"Anda memilih Sudah, silahkan masukkan jari-jari : ";
            cin>>angka1;
            cout<<"Masukkan sisi : ";
            cin>>angka2;
            hasil = 3.14*angka1*angka2+3.14*pow(angka1,2);
            cout<<"Hasil : "<<hasil<<endl;
            break;
        }
        else if (yesno == "t")
        {
            cout<<"Anda memilih Belum, seilahkan masukkan jari-jari : ";
            cin>>angka1;
            cout<<"Masukkan tinggi : ";
            cin>>angka2;
            hasil = 3.14*angka1*sqrt(pow(angka1,2)+pow(angka2,2))+3.14*pow(angka1,2);
            cout<<"Hasil : "<<hasil<<endl;
            break;
        }
        else
        {
            cout<<"Input yang anda masukkan tidak valid!"<<endl;
        }

    }
    cout << "Apakah akan menghitung lagi (y/t) :";
    cin >> menu;
    if (menu=='y')
    {
        goto mulai;
    }
    else
    {
        return 0;
    }
}