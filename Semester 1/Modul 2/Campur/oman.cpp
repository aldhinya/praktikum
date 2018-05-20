#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;

    cout<<"Masukan Nilai = ";
    cin>>n;

    for (int i=1; i<=n*2; i++)
    {
        cout<<"\n";
        for(int j=1; j<=n; j++)
        {
            cout<<"";
            if (n%2==1)
            {
                if (j<=i && i<=n)
                {
                    if(j%2==1)
                    {
                        cout<<"*";
                    }
                    else
                    {
                        printf("%c",95+j);
                    }
                }
                if (j+i<=n*2+1 && i>n)
                {
                    if(j%2==1)
                    {
                        cout<<"*";
                    }
                    else
                    {
                        printf("%c",95+j);
                    }

                }
            }
            else
            {
                if (j<=i && i<=n)
                {
                    if(j%2==0)
                    {
                        printf("%c",64+j);
                    }
                    else
                    {
                        cout<<"*";
                    }
                }
                if (j+i<=n*2+1 && i>n)
                {
                    if(j%2==0)
                    {
                        printf("%c",64+j);
                    }
                    else
                    {
                        cout<<"*";
                    }

                }
            }

        }
    }
    return 0;
}