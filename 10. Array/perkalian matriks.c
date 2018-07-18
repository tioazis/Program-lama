#include <stdio.h>

int i,j,k,row,col,common,A[10][10],B[10][10],C[10][10];

int main()
{
    printf("Program Perkalian 2 matriks ");
    printf("\nmasukkan row matriks A             : ");scanf("%d",&row);//i
    printf("\nmasukkan col matrik A/row matrik b : ");scanf("%d",&common);//j
    printf("\nmasukkan col matrikv B             : ");scanf("%d",&col);//k

    printf("masukkan elemen untuk matriks A  \n");
    for(i=0;i<row;i++)
        for(k=0;k<common;k++)
    {
        printf("Element A[%d][%d] = ",i,k);
        scanf("%d",&A[i][k]);
    }

    printf("masukkan elemen untuk matriks B \n");
    for(k=0;k<common;k++)
        for(j=0;j<col;j++)
    {
        printf("Element B[%d][%d] = ",k,j);
        scanf("%d",&B[j][k]);
    }

    //proses perkalian matriks B
    for(i=0;i<row;i++){
        for(j=0;i<col;j++)
        {
        C[i][j]=0;
        for(k=0;k<common;k++)
            C[i][j] = C[i][j] + (A[i][k]*B[k][j]);
        }
    }

    printf("tampilkan hasil matrik C \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++){
            printf("%d \t",C[i][j]);
        }
    }
}
