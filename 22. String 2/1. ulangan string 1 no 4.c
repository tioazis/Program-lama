#include<stdio.h>
#include<string.h>
#define  n 100

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
    char kal1[n],kal2[n];
    printf("\nInput kata-kata : ");
    gets(kal1);

    kal2[n]=strcpy(kal2,kal1);

    printf("\n\nSalinan = %s\n\n",kal2);

    return 0;

}
