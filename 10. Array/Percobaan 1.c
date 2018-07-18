#include <stdio.h>
#define MAKS 10
void panggil (int []);
int nilai[];
int jml;

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");

    int data[MAKS];
    panggil(data);
}

panggil(int x[])
{
    int i;
    printf("\nMasukan jumlah nilai yang akan di input : ");
    scanf("%d",&jml);
    for(i=0;i<jml;i++)
    {
        printf("\nnilai ke %d : ",i+1);
        scanf("%d",&x[i]);
    }
}
