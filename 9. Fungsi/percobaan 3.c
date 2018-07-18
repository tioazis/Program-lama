#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float kuadrat(float a)
{
    return(pow(a,2));
}

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
    printf("\n\n    => Program Pemangakatan Dua Sebuah Angka <= \n\n");

    float n;
    printf("masukkan : ");
    scanf("%f",&n);

    printf("%.2f",kuadrat(n));
}
