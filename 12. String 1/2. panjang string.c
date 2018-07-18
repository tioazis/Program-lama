#include <stdio.h>
#define n 200

int pjgstr(char []);

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");

	char kal[n];
	printf("Masukkan sebuah kalimat : ");
	gets(kal);
	printf("\nPanjang karakter adalah %d\n",pjgstr(kal));

}

int pjgstr(char sntn[])
{
	char x;
	int htg=0, a;
	for(a=0;;a++){
		x = sntn[a];
		if(x=='\0')
        {
			break;
		}
		else
        {
			htg++;
		}
	}
	return htg;
}
