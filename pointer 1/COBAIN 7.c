#include <stdio.h>

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
		int  count = 13, sum = 9, *x, *y;
		printf("\n%p, %p, %p, %p\n",&count, &sum, &x,&y);
		x = &count;
		*x = 27;
		y = x;
		x = &sum;
		*x = count;
		sum = *x / 2 * 3;
		printf("count = %d, sum = %d, *x = %d, *y = %d\n", count,sum,*x,*y);
}
