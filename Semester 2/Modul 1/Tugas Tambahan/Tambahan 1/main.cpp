#include <iostream>
#include <conio.h>
#include <windows.h>
#include "data.h"

using namespace std;

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
                cin >> dataNilai.quiz;
                cout << "Nilai Tugas = ";
                cin >> dataNilai.tugas;
                cout << "Nilai ETS   = ";
                cin >> dataNilai.ets;
                cout << "Nilai EAS   = ";
                cin >> dataNilai.eas;
                cout << endl;
            break;
        case 2:
            cout << "============="<<endl;
            cout << "TAMPIL DATA :"<<endl;
            cout << "============="<<endl;
                cout << "Nama        = " << dataMahasiswa.nama <<endl;
                cout << "NPM         = " << dataMahasiswa.npm <<endl;
                cout << "Kelas       = " << dataMahasiswa.kelas <<endl;
                cout << "Nilai Quiz  = " << dataNilai.quiz <<endl;
                cout << "Nilai Tugas = " << dataNilai.tugas <<endl;
                cout << "Nilai ETS   = " << dataNilai.ets <<endl;
                cout << "Nilai EAS   = " << dataNilai.eas <<endl;
                dataNilai.akhir=(dataNilai.ets+dataNilai.eas)/2;
                cout << "Nilai Akhir = " << dataNilai.akhir <<endl;
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
