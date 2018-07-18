#include <stdio.h>

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
    int y, x=87;
    int *px;
    printf("\n%p\n",&*px);
    px = &x;
    y = *px;

    printf("Alamat x                    = %p\n", &x);
    printf("isi px                      = %p\n", px);
    printf("isi x                       = %d, %p\n", x, &x);
    printf("nilai yang ditunjuk oleh px = %d\n", *px);
    printf("nilai y                     = %d, %p\n", y,&y);
}
