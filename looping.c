#include <stdio.h>

 int main()
 {
   printf("Azis Jabbar Susetio\n");
   printf("4201141021\n");
   printf("______________________________________\n");



  /* int n,m; // no 1
   printf("masukkan m :");
   scanf("%d", &n);

   for(m=0;m<=n*2;m++)

       if (m%2==1)
        printf("%d ",m);

   printf("selesai.\n\n");
   return 0;
   */
/*
   int hasil,n,i;

   printf ("masukkan n bilangan trianguler");
   scanf  ("%d",&n);

   hasil=0;
   printf("hasil penjumlahan trianguler dari %d deret adalah :\n\n", n);

   for (i=1;i<=n;i++)
   {
       printf("%d", i);
       hasil=hasil+1;

   }
    printf("\n\nPenjumlahan trianguler Deret Bilangan adalah = %d\n\n",hasil);
 */
/*
    int kolom,baris,a,b;
    printf("masukkan kolom ");
    scanf("%d",&kolom);
    printf("masukkan baris ");
    scanf("%d", &baris);

    for(a=1;a<=baris;a++)
    {
        for(b=1;b<=kolom;b++)

        printf("%d ",b);
        puts(" ");
    }


    printf("\n");//untuk membuat spasi antar baris
*/

int n,a=0,b=1,fib,c;

printf("masukkan n bilangan fibonacci yang ingin ditampilkan : " );
scanf("%d",&n);
for(c=1;c<=n;c++)
{

    if(c<=1)
        fib=c;
    else
    {
        fib=a+b;
        a=b;
        b=fib;
    }
    printf("%d ",fib);
}

return 0;
 }
