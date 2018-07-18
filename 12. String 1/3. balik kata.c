#include <stdio.h>
#define n 100

int pjgstr(char []);
void balikstr(char [], int);
char balikin[n];

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");

	int pjng;
	char klmt[n];
	printf(" Masukkan sebuah kalimat : ");
	gets(klmt);
	pjng = pjgstr(klmt);
	printf("Panjang karakter = %d",pjng);
	balikstr(klmt,pjng);

	int a;
	printf("\nKarakter setelah dibalik : ");
	for(a=0;a<n;a++)
    {
		printf("%c",balikin[a]);
	}
}

int pjgstr(char sntn[]){
	char x;
	int htg=0, a=0;
	while(1)
	{
		x = sntn[a];
		if(x=='\0')
        {
			break;
		}
		else
		{
			htg++;
		}
		a++;
	}
	return htg;
}

void balikstr(char idiot[], int wow)
{
	char l;
	int b,c=0,d=wow-1;
	for(b=wow;b>0;b--)
    {
		l = idiot[d];
		balikin[c] = l;
		c++;
		d--;
	}
}
