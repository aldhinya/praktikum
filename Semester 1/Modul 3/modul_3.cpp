#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string.h>

using namespace std;

int main()
{

    int jumlah;
    char ulang,nama[5][5];
    float nilai[3][3],akhir[5];
    do
    {
        cout<<"==================================================================="<<endl;
        cout<<setw(50)<<"PROGRAM MENGHITUNG NILAI AKHIR"<<endl;
        cout<<setw(50)<<"MATA KULIAH BAHASA PEMROGRAMAN"<<endl;
        cout<<"==================================================================="<<endl<<endl;
        cout<<"MASUKKAN JUMLAH MAHASISWA : ";
        cin>>jumlah;

        for(int i=1; i<=jumlah; i++)
        {
            cout<<"\nMAHASISWA KE-"<<i<<endl;
            cout<<"-------------------------------------"<<endl<<endl;
            cout<<"NAMA MAHASISWA : ";
            cin>>nama[i];
            strupr (nama[i]);
            cout<<"NILAI TUGAS    : ";
            cin>>nilai[i][0];
            cout<<"NILAI UTS      : ";
            cin>>nilai[i][1];
            cout<<"NILAI UAS      : ";
            cin>>nilai[i][2];
        }
        cout<<"\n-------------------------------------------------------------------------------------"<<endl;
        cout<<setw(40)<<"DAFTAR NILAI"<<endl;
        cout<<setw(50)<<"MATA KULIAH : BAHASA PEMROGRAMAN"<<endl;
        cout<<"-------------------------------------------------------------------------------------"<<endl;
        cout<<"No."<<setw(10)<<"Nama"<<setw(35)<<"Nilai"<<setw(29)<<"Grade"<<endl;
        cout<<setw(18)<<"Mahasiswa"<<setw(48)<<"-------------------------------------"<<endl;
        cout<<setw(35)<<"Tugas"<<setw(10)<<"UTS"<<setw(10)<<"UAS"<<setw(10)<<"AKHIR";
        cout<<"\n-------------------------------------------------------------------------------------"<<endl;
        for(int a=1; a<=jumlah; a++)
        {
            cout<<setw(3)<<a<<setw(15)<<nama[a]<<setw(17)<<nilai[a][0]<<setw(10)<<nilai[a][1]<<setw(10)<<nilai[a][2];
            akhir[a]=(nilai[a][0]+nilai[a][1]+nilai[a][2])/3;
            cout<<setw(10)<<setiosflags(ios::fixed)<<setprecision(0)<<akhir[a];

            if (akhir[a] > 85)
            {
                cout<<setw(12)<< "A";
            }
            else if (akhir[a] > 75)
            {
                cout<<setw(12)<< "B+";
            }
            else if (akhir[a] > 65)
            {
                cout<<setw(12)<< "B";
            }
            else if (akhir[a] > 55)
            {
                cout<<setw(12)<< "C+";
            }
            else if (akhir[a] > 0)
            {
                cout<<setw(12)<< "C";
            }
            else
            {
                cout<<setw(12)<< "n/a";
            }
            cout<<endl;
        }

        cout<<"-------------------------------------------------------------------------------------"<<endl<<endl;
        cout<<"TOTAL MAHASISWA = "<<jumlah<<endl;
        cout<<endl;
        cout<<"Ulang Kembali ( Y/T )? ";
        cin>>ulang;
        system ("cls");
    }
    while (ulang=='Y' || ulang=='y');
    cout<<"TERIMA KASIH!!!";
    cout<<endl<<endl;
}