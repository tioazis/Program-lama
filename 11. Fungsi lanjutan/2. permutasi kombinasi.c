#include <stdio.h>

int permutasi(int n, int r);
int combinasi(int n, int r);
long long faktorial(long long f);
int s; //s=selisih

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");

    int a,b;
    printf("\nmasukkan nilai r : ");
    scanf("%d",&a);
    printf("\nmasukkan nilai n : ");
    scanf("%d",&b);
    int hasil_per = m permutasi(a,b);
    printf("\n\nPermutasinya adalah %d",hasil_per);
    printf("\nCombinasinya adalah %d \n",combinasi(a,b));
}

int permutasi(int n, int r)
{
    int hasil_1;
    s=n-r;
    hasil_1= faktorial(n)/faktorial(s);
    return(hasil_1);
}

int combinasi(int n, int r)
{
    int c;
    c=permutasi(n,r)/faktorial(r);
    return c;
}


long long faktorial(long long f)
{
    int k, fak=1;
    for(k=f;k>=1;k--)
    {
        fak=fak*k;
    }
    return(fak);
}
