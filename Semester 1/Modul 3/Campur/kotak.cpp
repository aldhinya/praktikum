#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char a[90];
	cout<<"Masukan Kata = ";
    cin.getline(a,90);

    int len = strlen(a);
    int N = 2*len-1;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            int idx = min(min(i,j),min(N-1-i,N-1-j));
            cout << a[idx]<<" ";
        }
        cout << endl;
    }
	return 0;
}

/*======================ATAU======================*/

#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main() {
	char input[90];
	cout<<"Masukan Kata = ";
    cin.getline(input,90);

    int pjg = strlen(input);
    for(int i=1-pjg; i<pjg; i++){
        for(int j=1-pjg; j<pjg;j++){
        cout<<input[pjg-max(abs(i),abs(j))-1]<<" ";
        }
        cout<<endl;
    }
}