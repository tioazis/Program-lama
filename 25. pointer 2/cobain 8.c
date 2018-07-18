#include <stdio.h>

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
    int array1[10], array2[10];
    int *ip1, *ip2 = array2;
    int *akhir = &array1[10];
    for(ip1 = &array1[0]; ip1 < akhir; ip1++)
        *ip2++ = *ip1;
}

