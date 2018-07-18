#include <stdio.h>
#define MAKS 100

void dgn_scanf();
void dgn_gets();
void dgn_fgets();

char s1[MAKS];
char s2[MAKS];
char s3[MAKS];

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
    dgn_fgets();
    dgn_gets();
    dgn_scanf();

}

void dgn_scanf()
{
    printf("\nInsert Sentence : ");
    scanf("%s",s1);

    int a;
    printf("\n");
    for(a=0;a<MAKS;a++)
        printf("%c", s1[a]);
}

void dgn_gets()
{
    printf("\nMasukkan Kalimat : ");
    gets(s2);

    int b;
    printf("\n");
    for (b=0;b<MAKS;b++)
        printf("%c", s2[b]);


}

void dgn_fgets()
{
    printf("\nInsert Kalimat : ");
    fgets(s3,sizeof s3, stdin);

    int c;
    printf("\n");
    for(c=0;c<MAKS;c++)
        printf("%c",s3[c]);

}

