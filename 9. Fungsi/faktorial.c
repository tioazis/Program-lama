#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i;

int faktorial(int n)
{

    if(n==i)
        return(i);
    else
        return(n*faktorial(n+1));
}

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
    printf("\n\n    => Program Faktorial <= \n\n");

    printf("masukkan : ");
    scanf("%d",&i);

    printf("%d",faktorial(1));
}
