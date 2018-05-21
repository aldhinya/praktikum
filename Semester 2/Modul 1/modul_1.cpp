#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

struct
{
    char nama[50];
    char kelas[10];
    char npm[50];
    int quiz, tugas, ets, eas, akhir;
} dataMahasiswa;

int main()
{
    int menu;
    char ulang;
    do
    {
        cout << "============="<<endl;
        cout << "Menu : "<<endl;
        cout << "============="<<endl;
        cout << "1. Tambah Data Mahasiswa"<<endl;
        cout << "2. Lihat Data Mahasiswa"<<endl;
        cout << "Pilih Menu = ";
        cin >> menu;
        system("cls");
        switch(menu)
        {
        case 1:
            cout << "============="<<endl;
            cout << "INPUT DATA :"<<endl;
            cout << "============="<<endl;
            cin.sync();
                cout << "Nama        = ";
                cin.getline(dataMahasiswa.nama, 50);
                cout << "NPM         = ";
                cin.getline(dataMahasiswa.npm, 50);
                cout << "Kelas       = ";
                cin.getline(dataMahasiswa.kelas, 50);
                cout << "Nilai Quiz  = ";
                cin >> dataMahasiswa.quiz;
                cout << "Nilai Tugas = ";
                cin >> dataMahasiswa.tugas;
                cout << "Nilai ETS   = ";
                cin >> dataMahasiswa.ets;
                cout << "Nilai EAS   = ";
                cin >> dataMahasiswa.eas;
                cout << endl;
            break;
        case 2:
            cout << "============="<<endl;
            cout << "TAMPIL DATA :"<<endl;
            cout << "============="<<endl;
                cout << "Nama        = " << dataMahasiswa.nama <<endl;
                cout << "NPM         = " << dataMahasiswa.npm <<endl;
                cout << "Kelas       = " << dataMahasiswa.kelas <<endl;
                cout << "Nilai Quiz  = " << dataMahasiswa.quiz <<endl;
                cout << "Nilai Tugas = " << dataMahasiswa.tugas <<endl;
                cout << "Nilai ETS   = " << dataMahasiswa.ets <<endl;
                cout << "Nilai EAS   = " << dataMahasiswa.eas <<endl;
                dataMahasiswa.akhir=(dataMahasiswa.ets+dataMahasiswa.eas)/2;
                cout << "Nilai Akhir = " << dataMahasiswa.akhir <<endl;
                cout << endl;
            break;
        default:
            cout << "Pilih menu yang benar !" <<endl;
            break;
        }
        cout << "Kembali ke menu ? (y/t) ";
        cin >> ulang;
        system("cls");
    }
    while(ulang=='Y' || ulang=='y');
    return 0;
}
