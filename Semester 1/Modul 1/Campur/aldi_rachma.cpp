#include <iostream>

using namespace std;

int main()
{
    int x, y;
    float luasLingkaran, jarakDitempuh, km, phi=3.14;

    cout << "Masukkan Diameter X = ";
    cin>>x;
    cout << "Masukkan Perputaran Y = ";
    cin>>y;

    luasLingkaran=phi*x*x;
    jarakDitempuh=luasLingkaran*y;
    km=jarakDitempuh/100000;

    cout<<"\nDiameter Roda = "<<x<<" cm"<<endl;
    cout<<"\nBerputar Sebanyak = "<<y<<" Kali"<<endl;

    cout<<"\nJarak yang Ditempuh = "<<km<<" km"<<endl;

    return 0;
}