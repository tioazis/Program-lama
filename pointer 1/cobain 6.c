#include <stdio.h>

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
		int  count = 10, *temp, sum = 7;
		printf("\n %p, %p, %p\n",&count, &temp, &sum);
		temp = &count;
		*temp = 32;
		temp = &sum;
		*temp = count;
		sum = *temp * 4;
		printf("count = %d, *temp = %d, sum = %d\n", count,*temp, sum );
}
