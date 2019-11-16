#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string.h>

using namespace std;

int main()
{
    int jumlah[10], kls ;
    char ulang,nama[5][5][20], kelas[10][10];
    float nilai[10][10][10],akhir[5][5];
    do
    {
        cout<<"==================================================================="<<endl;
        cout<<setw(50)<<"PROGRAM MENGHITUNG NILAI AKHIR"<<endl;
        cout<<setw(50)<<"MATA KULIAH BAHASA PEMROGRAMAN"<<endl;
        cout<<"==================================================================="<<endl<<endl;
        cout<<"> MASUKKAN JUMLAH KELAS = ";
        cin>>kls;
        for(int b=1; b<=kls; b++)
        {
            cout<<"\n> NAMA KELAS KE-"<<b<<" = ";
            cin>>kelas[b];
            strupr (kelas[b]);

            cout<<"> MASUKKAN JUMLAH MAHASISWA : ";
            cin>>jumlah[b];

            for(int i=1; i<=jumlah[b]; i++)
            {
                cout<<"\nMAHASISWA KE-"<<i<<endl;
                cout<<"-------------------------------------"<<endl;
                cout<<"NAMA MAHASISWA : ";
                cin>>nama[b][i];
                strupr (nama[b][i]);
                cout<<"NILAI TUGAS    : ";
                cin>>nilai[b][i][0];
                cout<<"NILAI UTS      : ";
                cin>>nilai[b][i][1];
                cout<<"NILAI UAS      : ";
                cin>>nilai[b][i][2];
            }
        }
        for(int b=1; b<=kls; b++)
        {
            cout<<"\n-------------------------------------------------------------------------------------"<<endl;
            cout<<setw(43)<<"DAFTAR NILAI KELAS '" <<kelas[b]<<"'"<<endl;
            cout<<setw(50)<<"MATA KULIAH : BAHASA PEMROGRAMAN"<<endl;
            cout<<"-------------------------------------------------------------------------------------"<<endl;
            cout<<"No."<<setw(10)<<"Nama"<<setw(35)<<"Nilai"<<setw(29)<<"Grade"<<endl;
            cout<<setw(18)<<"Mahasiswa"<<setw(48)<<"-------------------------------------"<<endl;
            cout<<setw(35)<<"Tugas"<<setw(10)<<"UTS"<<setw(10)<<"UAS"<<setw(10)<<"AKHIR";
            cout<<"\n-------------------------------------------------------------------------------------"<<endl;

            for(int a=1; a<=jumlah[b]; a++)
            {
                cout<<setw(3)<<a<<setw(15)<<nama[b][a]<<setw(17)<<nilai[b][a][0]<<setw(10)<<nilai[b][a][1]<<setw(10)<<nilai[b][a][2];
                akhir[b][a]=(nilai[b][a][0]+nilai[b][a][1]+nilai[b][a][2])/3;
                cout<<setw(10)<<setiosflags(ios::fixed)<<setprecision(0)<<akhir[b][a];

                if (akhir[b][a] > 85)
                {
                    cout<<setw(12)<< "A";
                }
                else if (akhir[b][a] > 75)
                {
                    cout<<setw(12)<< "B+";
                }
                else if (akhir[b][a] > 65)
                {
                    cout<<setw(12)<< "B";
                }
                else if (akhir[b][a] > 55)
                {
                    cout<<setw(12)<< "C+";
                }
                else if (akhir[b][a] > 0)
                {
                    cout<<setw(12)<< "C";
                }
                else
                {
                    cout<<setw(12)<< "n/a";
                }
                cout<<endl;
            }
            cout<<"-------------------------------------------------------------------------------------"<<endl;
            cout<<"TOTAL MAHASISWA KELAS "<<kelas[b]<<" = "<<jumlah[b]<<endl;
        }
        cout<<endl;
        cout<<"Ulang Kembali ( Y/T )? ";
        cin>>ulang;
        system ("cls");
    }
    while (ulang=='Y' || ulang=='y');
    cout<<"TERIMA KASIH!!!";
    cout<<endl<<endl;
}
