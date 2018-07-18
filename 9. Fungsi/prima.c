#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long prima(long long, int);
main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
    printf("\n\n    => Program Bilangan Prima <= \n\n");

    long long n;
    printf("\n Masukkan Angka : ");
    scanf("%lld",&n);

    if(prima(n,2)==1)
        printf("\n%lld adalah bilangan prima\n\n",n);
    else
        printf("\n%lld bukanlah bilangan prima\n\n",n);
}

long long prima(long long i,int d)
{
    if(i==2 || i==3){
        return(1);
    }else
    {
        if(i-1 == d)
        {
            return(1);
        }
        else if(i%d==0)
        {
            return(0);
        }
        else
        {
            prima(i,d+1);
        }
    }
}
