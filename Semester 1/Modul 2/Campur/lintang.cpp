#include <iostream>

using namespace std;

int main()
{

    int n;

    cout <<"Lenght : ";
    cin>>n;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if((j <= n - i - 2) || (j >= n - i) )
            {
                cout <<" * ";
            }
            else if (j >= i - 2)
            {
                cout <<" 0 ";
            }
            else
            {
                cout <<" 1 ";
            }
        }
        cout << endl;
    }

}