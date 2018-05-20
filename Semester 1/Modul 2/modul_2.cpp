#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    bool b1,b2;

    cout<<"Length = ";
    cin>>n;

    for (i=0;i<n*2;i++){
        for (j=0;j<n*2;j++){
        if (i<n){
            b1 = (i%2==0) && ((j>=i) && (j<n*2-i));
            //baris && kanan atas && kiri atas
        }else{
            b1 = (i%2==1) && ((j>=n*2-i-1) && (j<=i));
            //baris && kanan bawah && kiri bawah
        }
        if (j<n) {
            b2 = (j%2==0) && ((i>=j) && (i<n*2-j));
            //kolom && kiri bawah && kiri atas
        }else{
            b2 = (j%2==1) && ((i>=n*2-j-1) && (i<=j));
            //kolom && kanan bawah && kanan atas
            }
            cout<<(b1 || b2 ? "# " : "- ");
        }
        cout<<endl;
    }
}
/*
OUTPUT :
# # # # # # # # # #                                                                                                              
# - - - - - - - - #                                                                                                              
# - # # # # # # - #                                                                                                              
# - # - - - - # - #                                                                                                              
# - # - # # - # - #                                                                                                              
# - # - # # - # - #                                                                                                              
# - # - - - - # - #                                                                                                              
# - # # # # # # - #                                                                                                              
# - - - - - - - - #                                                                                                              
# # # # # # # # # # 
*/