#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x, y, hasil;

    cout << "Masukkan X = ";
    cin>>x;

    y=x/2;
    hasil=sqrt(pow(x,y)*pow(x,x)*pow(y,y)*pow(y,x-1));

    cout << "Hasl = "<<hasil;
    return 0;
}