#include<iostream>

using namespace std;

int pencarian(int tampil)
{
    string kalimat, cari;
    cout<<"Masukkan kalimat = ";
    getline(cin, kalimat);

    cout<<"Cari = ";
    cin>>cari;

    tampil=0;
    char hasil = kalimat.find(cari, 0);
    while(hasil != -1)
    {
        tampil++;
        hasil = kalimat.find(cari, hasil+1);
    }

    return tampil;
}

int main()
{
    int tampil;

    cout<<"Jumlah Kata = "<<pencarian(tampil)<<endl;
}