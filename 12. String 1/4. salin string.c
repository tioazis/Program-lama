#include <stdio.h>
#define m 100

void copystr(char [], char []);

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
	char str1[m];
	char str2[m];
	printf("Masukkan kalimat : ");
	gets(str1);
	printf("\nString pada string 1 : %s\n",str1);
	copystr(str1,str2);
	printf("\nString pada string 2 : %s\n",str2);

}

void copystr(char txt1[], char txt2[])
{
	int a;
	char x;
	for(a=0;;a++)
    {
		x = txt1[a];
		if(x=='\0')
        {
			break;
		}
		else
        {
			txt2[a] = txt1[a];
		}
	}
}
