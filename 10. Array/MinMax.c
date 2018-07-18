#include <stdio.h>
#define MAKS 20

int findmax (int, int[]);
int input(int, int[]);
int i;

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");

    int hasil, bil[MAKS];
    int jml;
    printf("masukkan jumlah bilangan yang ingin di input : ");
    scanf("%d",&jml);
    printf("\n");

    input(jml,bil);
    findmax(jml,bil);


}

int input (int jml, int nilai[])
{
    int i;
    for(i=0;i<jml;i++)
    {
        printf("Bilangan ke %d : ", i+1);
        scanf("%d",&nilai[i]);
    }
}

int findmax(int elm, int nilai[])
{
    int max,min,i;
    for(i=0;i<elm;i++)
    {
        if(i==0)
        {
            max = nilai[i];
            min = nilai[i];
        }
        else
        {
            if(nilai[i]>max)
                max=nilai[i];
            if(nilai[i]<min)
                min=nilai[i];
        }
    }
    printf("\nNilai maximum = %d ",max);
    printf("\nNilai minimum = %d ",min);
}




