#include <stdio.h>
#define _row 5

int i,total,rerata,min,max,elemen;
void cetakarray(int A[], int jml);
int totalarray(int A[], int jml);


main()
{
    int nilai [100];
    printf("Array Dimensi Satu\n ");
    printf("masukkan jumlah elemen\n ");
    scanf("%d",&elemen);

    for(i=0;i<elemen;i++)
    {
        printf("masukkan elemen ");
    }

    cetakarray(nilai,elemen);
    printf("\ntotal = %d \n\n", totalarray(nilai,elemen));
    return 0;
}

void cetakarray(int A[],int jml)
{
    for(i=0;i<jml;i++)
        printf("%d",A[i]);
}

int totalarray(int A[], int jml)
{
    int t=0;
    for(i=0;i<=jml;i++)
        t+=A[i];
    return t;
}
