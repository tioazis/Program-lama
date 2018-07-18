#include <stdio.h>

main(){
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
		int z = 20, s = 30, *pz, *ps;
		printf("\n %p, %p, %p, %p\n\n", &z,&s,&pz,&ps);
		pz = &z;
		ps = &s;
		*pz += *ps;
		printf("z = %d\n", z);
		printf("s = %d\n", s);
	}
