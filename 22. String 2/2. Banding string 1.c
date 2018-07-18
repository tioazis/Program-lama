#include <stdio.h>
#include <string.h>
#define x 1000
int bandingstr1 ( char[],char[]);

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
    char kal1[x];
    char kal2[x];

    printf("\nKalimat 1 : ");
    gets(kal1);
    printf("\nKalimat 2 : ");
    gets(kal2);

    bandingstr1(kal1,kal2);
}

int bandingstr1(char str1[], char str2[])
{
    int y;

    y=strcmp(str1,str2);

    printf("\nHasil keluaran angka = %d\n",y);

    if(y==1)
        printf("\nString 1 lebih beasar nilai ASCII-nya\n");
    else if(y==-1)
        printf("\nString 2 lebih beasar nilai ASCII-nya\n");
    else
        printf(" \nNilai ASCII String 1 dan String 2 sama\n");
}
