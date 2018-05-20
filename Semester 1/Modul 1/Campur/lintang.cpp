#include <iostream>

using namespace std;

int main()
{
    int kubus, sisa, s=18, p=9, l=9, t=9;
    float limas;

    kubus=s*s*s;
    limas=0.3*(0.5*p*l)*t;
    sisa=kubus-limas;

    cout << "Volume Kubus = "<<kubus<<endl;
    cout << "Volume Limas = "<<limas<<endl;
    cout << "Sisa Kue = Volume Kubus - Volume Limas = "<<sisa<<endl;
    return 0;
}