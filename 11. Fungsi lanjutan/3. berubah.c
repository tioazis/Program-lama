#include <stdio.h>

void tuker (int *px, int *py);

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");

    int a,b;
    printf("masukkan bilangan pertama : ");
    scanf("%d",&a);
    printf("\nmasukkan bilangan kedua   : ");
    scanf("%d",&b);

    tuker(&a,&b);

    printf("\nbilangan setelah diubah %d dan %d ",a,b);
}

void tuker (int *px, int *py)
{
    int p, q;

    *px +=2;
    *py += 2;

}
