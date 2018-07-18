#include <stdio.h>

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
    float *pu, nu;
    printf("\n\n %p, %p \n", &pu, &nu);
    double u = 1234.0;
    printf("\n\n %p\n", &u);

    pu = &u;
    nu = *pu;

    printf("Alamat u = %p\n", &u);
    printf("Isi pu   = %p\n", pu);
    printf("\n\n %p \n", &pu);
    printf("isi u    = %lf\n",u );
    printf("nilai yang ditunjuk oleh pu = %f\n", *pu);
    printf("nilai nu = %f\n",nu);
}
