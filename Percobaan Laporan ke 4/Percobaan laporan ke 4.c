//
//  main.c
//  nyoba c
//
//  Created by teknologi game on 9/18/14.
//  Copyright (c) 2014 teknologi game. All rights reserved.
//

#include <stdio.h>


int main()
{
    printf("Azis Jabbar Susetio\n");
    printf("4210141021\n");
    printf("........................\n");


    double total_pembelian, discount = 0, n;//NO 1

    printf("Total pembelian   = Rp ");
    scanf("%lf", &total_pembelian);

    if(total_pembelian >= 100.000)
       discount = 0.05 * total_pembelian;
    else
        total_pembelian=total_pembelian;
    printf("Besarnya discount = Rp %.2lf\n", discount);
    n=total_pembelian-discount;
    printf("total pembelian =%.2lf \n",n);


/*
  int bil, abs; // no 2

  printf("Masukkan bilangan bulat : ");
  scanf("%d", &bil);

  if(bil < 0)
  abs = -bil;

  printf("Nilai absolut dari %d adalah %d\n\n", bil, abs);

*/
/*
  float a, b; // no 3

  printf("Masukkan nilai a : ");
  scanf("%f", &a);
  printf("Masukkan nilai b : ");
  scanf("%f", &b);

  printf("\n");
  if (b == 0)
    printf("%g dibagi dengan nol = TAK BERHINGGA\n", a);
  else
    printf("%g dibagi dengan %g  = %g\n", a, b, a/b);
*/

/*
  int bil1, bil2, sisa; //no 4

  printf("Masukkan bilangan pertama : ");
  scanf("%d", &bil1);
  printf("Masukkan bilangan kedua   : ");
  scanf("%d", &bil2);

  sisa = bil1 % bil2;
  printf("\n");
  if (sisa == 0)
    printf("%d habis dibagi dengan %d\n\n", bil1, bil2);
  else
    printf("%d tidak habis dibagi dengan %d\n\n",      bil1, bil2);
*/
/*
    char karakter; // no 5

    printf("Masukkan sebuah karakter : ");
    scanf("%c", &karakter);

    if ((karakter >= 'a' && karakter <= 'z') || (karakter >=     'A' && karakter <= 'Z'))
        printf("%c adalah karakter alphabet\n", karakter);
    else if (karakter >= '0' && karakter <= '9')
        printf("%c adalah bilangan\n", karakter);
    else
        printf("%c adalah karakter khusus\n", karakter);
*/

/*
   int bil, tanda; //no6

   printf("Masukkan sebuah bilangan : ");
   scanf("%d", &bil);

   if (bil < 0)
       tanda = -1;
   else if (bil == 0)
       tanda = 0;

   else    tanda = 1;
   printf("Bilangan %d memiliki tanda %d\n", bil, tanda);
*/

/* valid_operator diinisialisasi dg logika 1 */
/*
   int  valid_operator = 1;  //no 7
   char  operator;
   float  bil1, bil2, hasil;

   printf("Masukkan 2 buah bilangan dan sebuah operator\n");
   printf("dengan format : bil1 operator bil2\n\n");
   scanf("%f %c %f", &bil1, &operator, &bil2);

   if(operator == '*')
      hasil = bil1 * bil2;
   else if(operator == '/')
      hasil = bil1 / bil2;
   else if(operator == '+')
      hasil = bil1 + bil2;
   else if(operator == '-')
      hasil = bil1 - bil2;
   else
      valid_operator = 0;

   if(valid_operator)
      printf("%g %c %g is %g\n", bil1, operator, bil2,      hasil);
   else
      printf("Invalid operator!\n");
*/
/*
   int  valid_operator = 1; // no 8
   char  operator;
   float  bil1, bil2, hasil;

   printf("Masukkan 2 buah bilangan dan sebuah operator\n");
   printf("dengan format : bil1 operator bil2\n\n");
   scanf("%f %c %f", &bil1, &operator, &bil2);

   switch(operator)
    {
     case '*' : hasil = bil1 * bil2; break;
     case '/' : hasil = bil1 / bil2; break;
     case '+' : hasil = bil1 + bil2; break;
     case '-' : hasil = bil1 - bil2; break;
       default :  valid_operator = 0;
    }

    if(valid_operator)
        printf("%g %c %g is %g\n", bil1, operator, bil2,hasil);
    else
        printf("Invalid operator!\n");
*/

    //tugas 1
/*
    int bil1, bil2, hasil ;

    printf("Masukkan Bilangan Pertama : \n");
    scanf ("%d", &bil1);
    printf("Masukkan Bilangan Kedua : \n");
    scanf ("%d", &bil2);

    printf("\n");
      if(bil2 == 0)
        {
        printf("%d dibagi dengan angka 0 = tak terhingga \n", bil1);
        printf("anda salah memasukkan bilangan ke 2\n");
        printf("SILAHKAN COBA LAGI...! \n\n");
        }
      else
        printf("%d dibagi dengan %d = %d\n", bil1, bil2, bil1/bil2);

*/
 /*
    float a,b,c,D,x1,x2;
    printf( "Ini Adalah Program Untuk Menghitung Akar Kuadrat dan Determinan \n\n\n\n" );
     printf("Masukan Nilai  a:  \n");
     scanf("%g", &a);
     printf("Masukkan Nilai b:  \n");
     scanf("%g", &b);
     printf("Masukkan Nilai c:  \n");
     scanf("%g", &c);

    D=b*b-4*a*c;

    if (D==0)
    {
	x1=-b/2*a;
	x2=-b/2*a;
    }
    else if (D>0)
    {
	x1 = (-b + sqrt(D)) / 2*a;
	x2 = (-b - sqrt(D)) / 2*a;
    }
    else if (D<0)
    {
	x1 = -b / 2*a + (sqrt(-D)) / 2*a;
	x2 = -b / 2*a  - (sqrt(-D)) / 2*a;
    }
    printf("Nilai Determinan Adalah = %g\n",D);
    printf("Nilai Akar Imaginer x1 adalah  %g\n",x1);
    printf("Nilai Akar Imaginer x2 adalah  %g\n",x2);

    return 0;
*/
/*char c, d;
 c = 'd';  d = c;
 printf("d = %c", d);*/
/*
  float x, hasil;
   printf("masukkan nilai x = ");
   scanf("%f",&x);
   hasil = x*x*5-5*x+6;
   printf("hasil adalah : %f",hasil);*/

 /*  float  f, c;
   printf("masukkan celcius yang akan di konfersi ke farenheit : ");
   scanf("%f", &c);

   f= c*1.8+32;
   printf("%f derajat celcius sama dengan %f derajat farenheit", c,f);
*/
}

