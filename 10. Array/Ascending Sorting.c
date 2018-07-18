// File program : sorting.c
#include <stdio.h>
#define MAKS 20//?
void pemasukan_data(float []);
void pengurutan_data(float []);
void penampilan_data(float []);
int jml;

main()
{
    float data[MAKS];
    pemasukan_data(data);
    pengurutan_data(data);
    penampilan_data(data);
}
void pemasukan_data(float x[])
{
    int i;
    printf("Jumlah data = ");
    scanf("%d", &jml);
    for(i=0; i<jml; i++)
        {
            printf("Data ke-%d : ", i+1);
            scanf("%f", &x[i]);
        }
}
void pengurutan_data(float x[])
{
    int i, j;
    float temp;
    for(i=0; i<jml-1; i++)
        for(j=i+1; j<jml; j++)
        if(x[i] > x[j])
        {  //penukaran data
            temp = x[i];
            x[i] = x[j];
            x[j] = temp;
        }
}
void penampilan_data(float x[])
{
    int i;
    printf("\nData setelah diurutkan :\n\n");
    for (i=0; i<jml; i++)
        printf("Data ke-%d : %g\n", i+1, x[i]);
}
