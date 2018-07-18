#include<stdio.h>
#define n 20

void dgn_gets ();
void dgn_fgets ();
void dgn_scanf ();

char k1[n];
char k2[n];
char k3[n];

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
    dgn_gets();
    dgn_fgets();
    dgn_scanf();
}

void dgn_gets()
{
    printf("\nMasukkan Kalimat : ");
    gets(k1);

    int a;
    printf("\n");
    for(a=0;a<n;a++)
        printf("%c",k1[a]);

    printf("\n");
}
void dgn_fgets()
{
    printf("\nMasukkan Kalimat : ");
    fgets(k2, sizeof k2, stdin);

    int b;
    printf("\n");
    for(b=0;b<n;b++)
        printf("%c",k2[b]);
}
void dgn_scanf()
{
    printf("\n\nMasukkan Kalimat : ");
    scanf("%s",k3);

    int c;
    printf("\n");
    for(c=0;c<n;c++)
        printf("%c",k3[c]);
}

