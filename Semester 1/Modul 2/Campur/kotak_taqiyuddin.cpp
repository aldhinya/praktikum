#include <iostream>

using namespace std;

int main()
{
    int nilai, baris, kolom;

    cout<<"Inputkan nilai : ";cin>>nilai;

    for(baris = 0; baris<nilai*2; baris++){
            cout<<"\n";
        for(kolom = 0; kolom<nilai*2; kolom++){
        if(baris%2==0 && ((kolom>=baris) && (kolom<nilai*2-baris)))
            cout<<"# ";
        else if(kolom%2==0 &&((baris>=kolom) && (baris<nilai*2-kolom)))
            cout<<"# ";
        else if(baris%2==1 && ((kolom>=nilai*2-baris-1) && (kolom<=baris)))
            cout<<"# ";
        else if(kolom%2==1 && ((baris>=nilai*2-kolom-1) && (baris<=kolom)))
            cout<<"# ";
        else
            cout<<"- ";
        }
    }
}