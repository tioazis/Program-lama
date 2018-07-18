#include <math.h>
#include <stdlib.h>

long long ganjil(long long);

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
    printf("\n\n => Program Penentu bilangan ganjil <= \n\n");
    long long i,n;
    printf("masukkan bilangan : ");
    scanf("%lld",&i);

    if(ganjil(i)==0)
        printf("\ngenap");
    else
        printf("\nganjil");


}

long long ganjil(long long nilai)
{
    if(nilai%2==0)
        return(0);
    else if (nilai%2==1)
        return(1);
    else
        printf("salah angka");
}
