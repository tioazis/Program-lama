#include <stdio.h>
#define n 100

void salindongmas(char [], char []);

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
    char kal1[n];
    char kal2[n];
    printf("\nMasukkan kalimat : ");
    gets(kal1);
    printf("\nString 1 : %s",kal1);
    salindongmas(kal1,kal2);
    printf("\n\nString 2 : %s",kal2);

}

void salindongmas(char cot1[],char cot2[])
{
    int a;
    char x;
    for(a=0;;a++)
    {
        x=cot1[a];
        if(x=='\0')
            break;
        else
            cot2[a]=cot1[a];
    }
}
