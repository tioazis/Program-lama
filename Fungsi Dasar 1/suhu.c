
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

float fkec(float); float rkec(float);
float ckef(float); float cker(float);

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
    printf("\n\n    => Program Konversi Suhu <= \n\n");

    float suhu,a,b;
    char asal, tujuan;
    printf("input suhu : ");
    scanf("%f",&suhu);
    printf("\ninput asal derajat suhu : ");
    asal = getchar();
    scanf("%c",&asal);
    printf("\ninput tujuan derajat suhu : ");
    tujuan = getchar();
    scanf("%c",&tujuan);

    if (asal=='c' && tujuan =='f')
        printf("\n%.2f derajat farenheit\n",ckef(suhu));
    else if (asal=='c' && tujuan =='r')
        printf("\n%.2f derajat reamur\n",cker(suhu));
    else if (asal=='f' && tujuan=='c')
        printf("\n%.2f derajat celcius\n",fkec(suhu));
    else if (asal=='r' && tujuan=='c')
        printf("\n%.2f derajat celcius\n",rkec(suhu));
    else if (asal=='f' && tujuan=='r')
    {
        a=fkec(suhu);
        b=cker(a);
        suhu=b;
        printf("\n%.2f derajat reamur\n",b);
    }
    else if (asal=='r' && tujuan=='f')
    {
        a=rkec(suhu);
        b=ckef(a);
        suhu=b;
        printf("\n%.2f derajat farenheit\n",b);
    }
    else
        printf("\nsalah input, silahkan input lagi !\n");

    system("pause");

}

float ckef(float c)
{
    return((1.8f*c)+32);
}

float cker(float c)
{
    return(c*0.8f);
}

float fkec(float f)
{
    return((f-32)/1.8f);
}

float rkec(float r)
{
    return (r/0.8f);
}


/*
#include <stdio.h>

void ubah(int);
main()

{
    int x;
    printf("Masukkan nilai x : ");
    scanf("%d", &x);
    ubah(x);

    printf("x = %d\n", x);
}

void ubah(int y)
{
    y = 85;
}
*/
