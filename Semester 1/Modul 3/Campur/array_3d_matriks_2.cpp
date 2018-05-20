#include<iostream>

using namespace std;

int main ()
{
    int matriks1[3][3];
    int matriks2[3][3];
    int pengurangan[3][3];
    int pertambahan[3][3];
    int perkalian[3][3];
    int baris,kolom;

//Matriks Pertama
    cout<<"-------------------\n";
    cout<<"  Matriks Pertama  \n";
    cout<<"-------------------\n";
    for (baris=0; baris<3; baris++)
    {
        for (kolom=0; kolom<3; kolom++)
        {
            cout<<"Masukan Angka ["<<baris<<"] ["<<kolom<<"] = ";
            cin>>matriks1[baris][kolom];
        }
        cout<<endl;
    }
//Matriks Kedua
    cout<<"------------------\n";
    cout<<"  Matriks Kedua   \n";
    cout<<"------------------\n";
    for (baris=0; baris<3; baris++)
    {
        for (kolom=0; kolom<3; kolom++)
        {
            cout<<"Masukan Angka ["<<baris<<"] ["<<kolom<<"] = ";
            cin>>matriks2[baris][kolom];
        }
        cout<<endl;
    }
//Matriks Jumlah
    cout<<"------------------------------\n";
    cout<<"Hasil Pertambahan [3]+[3] \n";
    cout<<"------------------------------\n";
    for (baris=0; baris<3; baris++)
    {
        for (kolom=0; kolom<3; kolom++)
        {
            pertambahan[3][3]=matriks1[baris][kolom]+matriks2[baris][kolom];
            cout<<pertambahan[3][3]<<" ";
        }
        cout<<endl;
    }
//Matriks Kurang
    cout<<"-----------------------------\n";
    cout<<"Hasil Pengurangan [3]-[3] \n";
    cout<<"-----------------------------\n";
    for (baris=0; baris<3; baris++)
    {
        for (kolom=0; kolom<3; kolom++)
        {
            pengurangan[3][3]=matriks1[baris][kolom]-matriks2[baris][kolom];
            cout<<pengurangan[3][3]<<" ";
        }
        cout<<endl;
    }
//Matriks Perkalian
    cout<<"------------------------------\n";
    cout<<"Hasil Pertambahan [3]x[3] \n";
    cout<<"------------------------------\n";
    for (baris=0; baris<3; baris++)
    {
        for (kolom=0; kolom<3; kolom++)
        {
            perkalian[3][3]=matriks1[baris][kolom]*matriks2[baris][kolom];
            cout<<perkalian[3][3]<<" ";
        }
        cout<<endl;
    }
}