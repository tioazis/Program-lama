#include <stdio.h>
#include <math.h>

double ubahrad(double t);

int main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");

    double sA, sB, sC, pP, pQ, pR;
    printf("Bayangkan segitiga ABC siku-siku pada sudut ABC ! \n\n");
    printf("Masukkan panjang sisi AB : ");
    scanf("%lf",&pP);
    printf("\nMasukkan sudut BAC : ");
    scanf("%lf", &sA);

    sC = 90 - sA;
    pR = (pP * sin (ubahrad(sA))) / sin (ubahrad(sC));

    printf("Maka panjang sisi BC adalah %0.0lf \n", pR);
}

double ubahrad(double t)
{
    double rad, PI=3.14159;
    rad=(t/180)*PI;

    return rad;
}
