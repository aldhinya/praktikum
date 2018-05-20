#include <iostream>

using namespace std;

int pangkat(int x, int y)
{
    if (y==0)
        return 1;
    else
        return (x*pangkat (x, y-1));
}

int main()
{
    int n, p, hasil;
    cout<<"Bilangan\t= ";
    cin>>n;
    cout<<"Pangkat\t\t= ";
    cin>>p;
    hasil=pangkat(n,p);
    cout<<"Hasil\t\t= "<<hasil<<endl;
}