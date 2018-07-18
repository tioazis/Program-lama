#include<stdio.h>
main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");

		int x = 1, y = 2, *ip;
		printf("\n\n %p, %p, %p\n", &x, &y,&ip);
		ip = &x;
		y = *ip;
		*ip = 3;
		printf("x = %d, y = %d", x, y);
}
