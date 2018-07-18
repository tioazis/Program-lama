#include <stdio.h>

int main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");

    int x,y,row,col, A[10][10],B[10][10],C[10][10];
    printf("Masukkan jumlah baris : "); scanf("%d",&row);
    printf("Masukkan jumlah kolom : "); scanf("%d",&col);

    printf("Masukkan elemen untuk matriks Pertama : \n");
    for(x=0; x<row; x++)
        for(y=0;y<col;y++)
        {
            printf("Elemen matriks Pertama pada [%d][%d] : ",x,y);
            scanf("%d",&A[x][y]);
        }


    printf("Masukkan elemen untuk matriks Kedua : \n");
    for(x=0; x<row; x++)
        for(y=0;y<col;y++)
        {
            printf("Elemen matriks Kedua pada [%d][%d] : ", x,y);
            scanf("%d", &B[x][y]);
        }


    for(x=0; x<row; x++)

        for(y=0;y<col;y++)
        {
            C[x][y] = A[x][y]+B[x][y];
            printf("Hasil penjumlahan matriks tersebut adalah : \n");
        }
        for(x=0; x<row; x++)
        {
            for(y=0;y<col;y++)
                printf("%d\t", C[x][y]);
                printf("%\n");
        }

}
