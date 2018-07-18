#include <stdio.h>

int f_to_i (int inch);
float i_to_cm (float cm);
float c_to_m (float mtr);
int i;
main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");

    float (n);
    float a,b,c;
    printf("\nMasukkan panjang dengan satuan feet : ");
    scanf("%f",&n);
    a = f_to_i(n);
    b = i_to_cm(a);
    c = c_to_m(b);

    printf("\n\n%.2f Feet setara dengan %.2f Meter\n\n",n,c);

}

int f_to_i( int inch)
{
    int tot_i;
    tot_i=inch*12;

    return(tot_i);
}

float i_to_cm(float cm)
{
    float tot_cm, x=2.54;
    tot_cm = cm*x;

    return(tot_cm);
}

float c_to_m(float mtr)
{
    float tot_m;
    tot_m = mtr/100;

    return(tot_m);
}
