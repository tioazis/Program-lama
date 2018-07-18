#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void menu()
 {
   printf("pilihan menu\n");
 }

int main()
 {
      printf("\n    =|------------------------|=\n");
      printf("   ==|   Azis Jabbar Susetio  |==\n");
      printf("  ===|       4210141021       |===\n");
      printf("   ==| 1 - D4 Game Technology |==\n");
      printf("    =|------------------------|=\n");

      int i,n;
      printf("masukkan sesuatu : ");
      scanf("%d",&n);

      for(i=1;i<=n;i++)
        menu();

      return 0;
 }


