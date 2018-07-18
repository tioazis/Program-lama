#include <stdio.h>
// File program : sorting.c
#include <stdio.h>
#define MAKS 20//?
void pemasukan_data(float []);
void pengurutan_data_ASC(float []);
void pengurutan_data_DESC(float []);
void penampilan_data_ASC(float []);
void penampilan_data_DESC(float []);

int jml;

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");

    float data[MAKS];
    pemasukan_data(data);
    pengurutan_data_ASC(data);
    penampilan_data_ASC(data);
    pengurutan_data_DESC(data);
    penampilan_data_DESC(data);
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
void pengurutan_data_ASC(float x[])
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
void penampilan_data_ASC(float x[])
{
    int i;
    printf("\nData setelah diurutkan ASCENDING:\n\n");
    for (i=0; i<jml; i++)
        printf("Data ke-%d : %g\n", i+1, x[i]);
}
void pengurutan_data_DESC(float x[])
{
    int i, j;
    float temp;
    for(i=0; i<jml-1; i++)
        for(j=i+1; j<jml; j++)
        if(x[i] < x[j])
        {  //penukaran data
            temp = x[i];
            x[i] = x[j];
            x[j] = temp;
        }
}

void penampilan_data_DESC(float x[])
{
    int i;
    printf("\nData setelah diurutkan DESCENDING:\n\n");
    for (i=0; i<jml; i++)
        printf("Data ke-%d : %g\n", i+1, x[i]);
}
