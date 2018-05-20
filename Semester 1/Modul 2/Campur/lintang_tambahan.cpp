#include <iostream>

using namespace std;
int main(){

    int n;

    cout<<"masukan nilai = ";
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<"\n";
        for(int j=n; j>=1; j--){
            cout<<" ";
            if (i>=j){
                cout<<i;
            }
        }
    }


}