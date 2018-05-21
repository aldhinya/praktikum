#include <iostream>
#include <conio.h>
#include <windows.h>
#include "data.h"

using namespace std;

int main()
{
    int menu, jumlah;
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
            cout << "Masukkan jumlah mahasiswa = ";
            cin >> jumlah;
            for (int i=1; i<=jumlah; i++)
            {
                cin.sync();
                cout << "Nama        = ";
                cin.getline(dataMahasiswa[i].nama, 50);
                cout << "NPM         = ";
                cin.getline(dataMahasiswa[i].npm, 50);
                cout << "Kelas       = ";
                cin.getline(dataMahasiswa[i].kelas, 50);
                cout << "Nilai Quiz  = ";
                cin >> dataNilai[i].quiz;
                cout << "Nilai Tugas = ";
                cin >> dataNilai[i].tugas;
                cout << "Nilai ETS   = ";
                cin >> dataNilai[i].ets;
                cout << "Nilai EAS   = ";
                cin >> dataNilai[i].eas;
                cout << endl;
            }
            break;
        case 2:
            cout << "============="<<endl;
            cout << "TAMPIL DATA :"<<endl;
            cout << "============="<<endl;
            for (int i=1; i<=jumlah; i++)
            {
                cout << "Nama        = " << dataMahasiswa[i].nama <<endl;
                cout << "NPM         = " << dataMahasiswa[i].npm <<endl;
                cout << "Kelas       = " << dataMahasiswa[i].kelas <<endl;
                cout << "Nilai Quiz  = " << dataNilai[i].quiz <<endl;
                cout << "Nilai Tugas = " << dataNilai[i].tugas <<endl;
                cout << "Nilai ETS   = " << dataNilai[i].ets <<endl;
                cout << "Nilai EAS   = " << dataNilai[i].eas <<endl;
                dataNilai[i].akhir=(dataNilai[i].ets+dataNilai[i].eas)/2;
                cout << "Nilai Akhir = " << dataNilai[i].akhir <<endl;
                cout << endl;
            }
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
