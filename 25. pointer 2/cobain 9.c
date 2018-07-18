#include <stdio.h>

int CariData(int a);
int array1[4] = {1,8,3,5};
main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
	int hasil, bil;
	printf("Masukkan bilangan yang akan dicari = ");
	scanf("%d",&bil);
	hasil=CariData(bil);
	if(hasil==1)
		printf("Data ditemukan\n");
	else
		printf("Data tidak ditemukan\n");
return 0; }

int CariData(int a)
{
	int *nilai,i,output=0;
	nilai=array1;
	for(i=0;i<4;i++, *nilai++)
	{
		if(a==*nilai)
		{
			output=1;
			break;
		}
	}
	return output;
}
