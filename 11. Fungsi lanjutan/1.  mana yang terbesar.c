#include <stdio.h>

int pembanding(int x, int y);


main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");

    int a,b;
    printf("Masukkan nilai pertama dan kedua : \n");
    scanf("%d %d",&a,&b);

    printf("%d adalah yang lebih besar \n", pembanding(a,b));
}

int pembanding(int x, int y)
{
    if(x<y)
    {
        return(y);
    }
    else
    {
        return(x);
    }
}

