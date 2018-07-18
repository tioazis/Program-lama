#include <stdio.h>
main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");

    static int tgl_lahir[] = {16, 4, 1974};
    printf("\n\n%p\n\n", &tgl_lahir);
    int *ptgl;
    printf("\n\n%p\n\n", &ptgl);
    ptgl = tgl_lahir;
    printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl);
    printf("Nilai dari tgl_lahir[0] = %d\n", tgl_lahir[0]);
}

