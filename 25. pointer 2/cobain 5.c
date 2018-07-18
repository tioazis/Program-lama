
#include <stdio.h>
char *nama1 = "AHMAD";
char *nama2 = "RIFDA";
 main()
 {
     printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
     char *namax;
 puts("SEMULA : ");
 printf("nama1 --> %s\n", nama1);
  printf("nama2 --> %s\n", nama2);
 namax = nama1;
 nama1 = nama2;
 nama2 = namax;
 puts("KINI : ");
  printf("nama1 --> %s\n", nama1);
  printf("nama2 --> %s\n", nama2);
  }
