#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int rumus1(int a)
{
    if(a==0)
        return(1);
    else
        return(2*rumus1(a-1)+1);

}

int rumus2 (int b)
{
    if(b==0)
        return(0);
    else
        return(rumus2(b-1)+b-1);
}

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");

    int i;
    printf("masukkan angka  : ");
    scanf("%d",&i);


    printf("\n%d",rumus1(i));
    printf("\n%d",rumus2(i));
}
