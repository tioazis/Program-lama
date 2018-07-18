#include <stdio.h>
#include <stdlib.h>
#define MAKS 20

void input(float []);
int findmax(float [],int);
void output();
int jml, temp;

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
    float data[MAKS];
    input(data);
    printf("data terbesar adalah %d\n\n",findmax(data,jml));
    system("pause");

}

void input (float x[])
{
    int i;
    printf("\nInput jumlah data : ");
    scanf("%d",&jml);

    for(i=0;i<jml;i++)
    {
        printf("Data Ke %d : ", i+1);
        scanf("%f",&x[i]);
    }

}

int findmax (float x[],int a)
{
    int i,j;
    for(i=0; i<jml; i++){
        if(i==0){  //penukaran data
            temp = x[i];
        }else if(temp<x[i]){
            temp = x[i];
        }
    }
    return temp;
}


