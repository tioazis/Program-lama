#include<stdio.h>

int main ()
{
    printf("Azis Jabbar Susetio\n");
    printf("4201141021\n");
    printf("-----------------------------\n\n");
/*
    int    var_bilangan = 32767; //no 1
    float  var_pecahan1 = 339.2345678f;
    double var_pecahan2 = 3.4567e+40;
    char   var_karakter = 'S';

    printf("bilangan = %d\n", var_bilangan);
    printf("pecahan 1 = %f\n", var_pecahan1);
    printf("pecahan 2 = %lf\n", var_pecahan2);
    printf("karakter = %c\n", var_karakter);
    */

    /*
    int a=12, b=2, c=3, d=4,e,f,g,h,i,j; //no 2

    printf(" a = 12\n b = 2\n c = 3\n d = 4\n\n");
    e= a%b;
    printf(" hasil a modulus b adalah : %d \n", e);
    f= a-c;
    printf(" hasil a-b adalah : %d \n", f);
    g= a+b;
    printf(" hasil a+b adalah : %d \n", g);
    h= a/d;
    printf(" hasil a/b adalah : %d \n", h);
    f=a/d*d+a%d;
    printf(" hasil a/d*d+a dimodulus dengan d adalah %d\n", f);
    i=a%d/d*a-c;
    printf(" hasil a dimodulus dengan d / d * a - c adalah  %d", i);
    */

    /*
    int f,c; //no 3

    printf("Ini Adalah Program Untuk Mengkonversi Derajat Suhu Celcius Ke Farenheit\n\n");

    printf("masukkan derajat celcius yang akan di konversi ke farenheit = \n");
    scanf ("%d",&c);

    f=c*1.8+32;

    printf("%d derajat celcius sama dengan %d derajat farenheit\n\n",c,f);
    */
    /*
    int x,y; //no 4

    printf("masukkan karakter\n");
    scanf("%c", &y);

    x=y;

    printf("%c\n",y);
    return 0;
    */
       float radius, keliling, luas; //no 8

    printf("Masukkan jari-jari lingkaran : ");
    scanf("%f",&radius);

    keliling = 2 * 3.14f * radius;
    luas = 0.5f * 3.14f * radius * radius;

    printf("\nData lingkaran\n");
    printf("jari-jari = %8.2f\n", radius);
    printf("Keliling = %8.2f\n", keliling);
    printf("luas     = %8.2f\n", luas);




}
