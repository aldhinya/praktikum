#include <iostream>

using namespace std;

int main()
{
    int n;

    cout <<"masukkan angka = ";
    cin>>n;

        for (int i=0; i < n; i++)
        {
            for (int j=0; j < n; j++)
            {
                if ((i==0) || (i==n-1) || (j==n) || (j==n))
                {
                    cout<<(" * " );
                }
                else
                {
                    cout<<(" 0 ");
                }
            }
            cout<<"\n";

    }
}