#include <stdio.h>
 main()
 {
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");

  float d = 54.5f, *pd;
  printf("Isi d mula-mula = %g\n", d);
  pd = &d;
  *pd += 10;
  printf("Isi d sekarang  = %g\n", d);

  }
