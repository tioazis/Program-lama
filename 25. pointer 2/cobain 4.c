#include <stdio.h>
#include <string.h>
#define PANJANG 20

char nama1[PANJANG] = "AHMAD";
char nama2[PANJANG] = "RIFDA";
main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
    char namax[PANJANG];
 puts("SEMULA : ");
 printf("nama1 --> %s\n", nama1);
 printf("nama2 --> %s\n", nama2);
 strcpy(namax, nama1);
 strcpy(nama1, nama2);
 strcpy(nama2, namax);
 puts("KINI : ");
 printf("nama1 --> %s\n", nama1);
 printf("nama2 --> %s\n", nama2);
 }
