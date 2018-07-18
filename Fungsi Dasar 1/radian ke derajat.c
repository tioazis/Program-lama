#include <stdio.h>
#include <math.h>
#include <stdlib.h>


float radian(float);


main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
printf("\n\n => Program Konversi Radian ke Derajat <= \n\n");

    float drjt, hasil;
    printf("Masukkan Derajat Radian : ");
    scanf("%f",&drjt);
    hasil = radian(drjt);
    printf("%.2f radian = %.2f derajat\n", drjt, hasil);

}

float radian(float rad)
{
    float pi=3.14f;
    return(rad/180*pi);
}
