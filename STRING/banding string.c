#include <stdio.h>
#include <string.h>
#define x 1000


main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
    char kal1[x];
    char kal2[x];
    int y,z;

    printf("\nKalimat 1 : ");
    gets(kal1);
    printf("\nKalimat 2 : ");
    gets(kal2);

    y=strcmp(kal1,kal2);
    z=strcmpi(kal1,kal2);

    printf("\n=>Dengan strcmp ");
    printf("\n  nilai : %d ",y);
    if (y==1)
    {
        printf("\n  Kalimat 1 lebih besar dari Kalimat 2\n");
    }
    else if(y==-1)
    {
        printf("\n  Kalimat 2 lebih besar dari Kalimat 1\n");
    }
    else
    {
        printf("\n  Kalimat 1 dan Kalimat 2 Bernilai Sama\n");
    }

    printf("\n=>Dengan strcmpi ");
    printf("\n  nilai : %d ",z);
    if (z==1)
    {
        printf("\n  Kalimat 1 lebih besar dari Kalimat 2\n");
    }
    else if(z==-1)
    {
        printf("\n  Kalimat 2 lebih besar dari Kalimat 1\n");
    }
    else
    {
        printf("\n  Kalimat 1 dan Kalimat 2 Bernilai Sama\n");
    }

}



