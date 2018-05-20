#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    int sisi;
    float A, B, C;
    double sisiA, sisiB, sisiC;
    char ulang;
    mulai:

    printf("           ____    ");
    printf("\n     C ___|    |   ");
    printf("\n    __|        | A ");
    printf("\n __|           |   ");
    printf("\n|______________|   ");
    printf("\n        B          ");
    printf("\n============================\n");
    printf("1. Cari Sisi A (sisi depan) \n");
    printf("2. Cari Sisi B (sisi samping) \n");
    printf("3. Cari Sisi C (sisi miring)");
    printf("\n============================\n");
    printf("\nMasukan Sisi yang Ingin Anda Cari : ");
    scanf("%d", &sisi);

    if (sisi == 1) {
        printf("Masukan Sisi B : ");
        scanf("%f", &B);
        printf("Masukan Sisi C : ");
        scanf("%f", &C);

        sisiA = sqrt((C*C)-(B*B));
        printf("\nPanjang Sisi A = %f", sisiA);
        }
    else if (sisi == 2) {
        printf("Masukan Sisi A : ");
        scanf("%f", &A);
        printf("Masukan Sisi C : ");
        scanf("%f", &C);

        sisiB = sqrt((C*C)-(A*A));
        printf("\nPanjang Sisi B = %f", sisiB);
        }
     else if (sisi == 3) {
        printf("Masukan Sisi A : ");
        scanf("%f", &A);
        printf("Masukan Sisi B : ");
        scanf("%f", &B);

        sisiC = sqrt((B*B)+(A*A));
        printf("\nPanjang Sisi C = %f", sisiC);
        }
     else {
        printf("\nAnda tidak Memilih Menu di atas!\n");
        }

     printf("\n\nApakah Anda Ingin Menghitung Lagi (y/t) :");
     scanf("%s", &ulang);
     if(ulang=='y')
     {
        goto mulai;
     } else{
         return 0;;
     }

}