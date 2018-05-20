#include <iostream>

using namespace std;

int main()
{
    int P;
    float r, s, luasLingkaran, luasSegitiga, luasDaerahPutih, luasDaerahHitam, selisih, phi=3.14;

    cout<< "Masukkan P = ";
    cin>>P;

    r=P/2;
    s=P;
    luasLingkaran=(phi*r*r)/2;
    luasSegitiga=0.5*r*(r/2);
    luasDaerahPutih=luasLingkaran+luasSegitiga;
    luasDaerahHitam=s*s;
    selisih=luasDaerahHitam-luasDaerahPutih;

    cout << "Luas Lingkaran = "<<luasLingkaran<<endl;
    cout << "Luas Segitiga = "<<luasSegitiga<<endl;
    cout << "Luas Daerah yang Berwarna Putih = "<<luasDaerahPutih<<endl;
    cout << "Selisih Daerah Hitam dan Daerah Putih = "<<selisih<<endl;

    return 0;
}