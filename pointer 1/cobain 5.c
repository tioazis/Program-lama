#include <stdio.h>
#include <math.h>
main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
		int i1, i2, *p1, *p2;
		printf("\n%p,%p,%p,%p", &i1, &i2,&p1,&p2);
		i1 = 9;
		p1 = &i1;
		i2 = *p1/2 - 2*3; //i2 = *p1 / 2–2 * 3;
		p2 = p1;
		printf("\n\ni1=%d,i2=%d,*p1=%d,*p2=%d\n",i1,i2,*p1,*p2);
	}
