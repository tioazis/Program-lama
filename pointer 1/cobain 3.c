#include<stdio.h>

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");

		char c = 'Q';
		printf("\n%p\n", &c);
		char *cp = &c;
		printf("\n%p, %p\n", &c, &cp);
		printf("%c %c\n", c, *cp);
		c = '/';
		printf("%c %c\n", c, *cp);
		*cp = '(';
		printf("%c %c\n", c, *cp);
}
