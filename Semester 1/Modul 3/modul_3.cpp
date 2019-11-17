#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string.h>

using namespace std;

int main()
{

    int jumlah;
    char ulang,nama[2][10][10];
    float nilai[3][3],akhir[5];
    do
    {
        cout<<"==================================================================="<<endl;
        cout<<setw(50)<<"PROGRAM MENGHITUNG NILAI AKHIR"<<endl;
        cout<<"==================================================================="<<endl<<endl;
        cout<<"MASUKKAN JUMLAH MAHASISWA : ";
        cin>>jumlah;

        for(int i=1; i<=jumlah; i++)
        {
            cout<<"\nMAHASISWA KE-"<<i<<endl;
            cout<<"-------------------------------------"<<endl<<endl;
            cout<<"NAMA DEPAN\t: ";
            cin>>nama[0][i];
            cout<<"NAMA BELAKANG\t: ";
            cin>>nama[1][i];
            cout<<"NILAI TUGAS\t: ";
            cin>>nilai[0][i];
            cout<<"NILAI UTS\t: ";
            cin>>nilai[1][i];
            cout<<"NILAI UAS\t: ";
            cin>>nilai[2][i];
        }
        cout<<"\n-------------------------------------------------------------------------------------"<<endl;

        cout<<setw(40)<<"DAFTAR NILAI"<<endl;

        cout<<"-------------------------------------------------------------------------------------"<<endl;

        cout<<"No."<<setw(10)<<"Nama"<<setw(35)<<"Nilai"<<setw(29)<<"Grade"<<endl;
        cout<<setw(18)<<"Mahasiswa"<<setw(48)<<"-------------------------------------"<<endl;
        cout<<setw(35)<<"Tugas"<<setw(10)<<"UTS"<<setw(10)<<"UAS"<<setw(10)<<"AKHIR";

        cout<<"\n-------------------------------------------------------------------------------------"<<endl;

        for(int a=1; a<=jumlah; a++)
        {

            cout<<setiosflags(ios::fixed)<<setprecision(0);

            strupr (strcat(strcat(nama[0][a], " "),nama[1][a]));

            cout<<setw(3)<<a<<setw(15)<< nama[0][a] <<setw(17)<< nilai[0][a] <<setw(10)<< nilai[1][a] <<setw(10)<< nilai[2][a];

            akhir[a]=(nilai[0][a]+nilai[1][a]+nilai[2][a])/3;
            cout<<setw(10)<<akhir[a];

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
