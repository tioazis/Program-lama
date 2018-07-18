#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void triangular(n)
{
    int t=0,i;
    for(i=1;i<=n;i++)
        {
            t=t+i;
        }
    printf("%d\n",t);

}

int main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
    printf("\n\n   => Program Bilangan Triangular <= \n\n");

    int n,i;
    printf("masukkan jumlah bilangan trianguler yang diinginkan : ");
    scanf("%d",&n);

    triangular(n);

    return 0;
}
