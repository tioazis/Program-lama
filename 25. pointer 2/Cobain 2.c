
#include <stdio.h>
 main()
 {
     printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
     static int tgl_lahir[] = {16, 4, 1974};
     int *ptgl, i;
    ptgl = tgl_lahir;
    printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl);
    for (i=0; i<3; i++)
    printf("Nilai dari tgl_lahir[i] = %d\n", *(ptgl+i));
 }
