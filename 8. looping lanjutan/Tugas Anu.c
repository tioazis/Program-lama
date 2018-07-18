#include <stdio.h>
#include <conio.h>

// 1. Pascal
// 2. FPB
// 3. KPK
// 4. Bil Prima
// 5. Prima Dibatasi
// 6. Fibonacci
// 7. Leap Year

int main()

{
        printf("\n    =|------------------------|=\n");
        printf("   ==|   Azis Jabbar Susetio  |==\n");
        printf("  ===|       4210141021       |===\n");
        printf("   ==| 1 - D4 Game Technology |==\n");
        printf("    =|------------------------|=\n");
/*

        printf("           => Program 1 <= \n");
        printf("        => Bilangan Pascal <= \n\n");

        int nilai,i,j,k,a;
        printf("Silahkan masukkan tinggi segitiga yang anda inginkan :> : ");
        scanf("%d",&nilai);//1

        for(i=0; i<=nilai;i++)
        {
            for(k=0; k<=((2*nilai)-(2*i));k++)//2 ngeprint spasi
            {
                printf(" ");
            }
            for(j=0;j<=i;j++)
            {
                if(j==0 || i==j)
                    a=1;
                else
                    a=a*(i+1-j)/j;

                printf("  %d ", a);
            }
            printf("\n");
        }
        getchar( );

*/
/*
        printf("           => Program 2 <= \n");
        printf(" => Faktor Persekutuan ter-Besar <= \n\n");

        int a,b,c=0,d;

        printf("Masukkan Bilangan Pertama : ");
        scanf("%d",&a);

        printf("Masukkan Bilangan Kedua : ");
        scanf("%d",&b);
        c = 0;
        while(c<=a && c<=b)
        {
            if(a==0 || b==0)
            {
                d = c;
                break;
            }
            c++;

            if(a%c==0 && b%c==0)
            {
                d = c;
            }
        }
        printf("%d\n",d);
*/
/*
        printf("           => Program 3 <= \n");
        printf(" => Kelipatan Persekutuan ter-Kecil <= \n\n");

        int a,b,c;

        printf("Masukkan Bilangan Pertama : ");
        scanf("%d",&a);

        printf("Masukkan Bilangan Kedua : ");
        scanf("%d",&b);

        if(a%b==0 || b%a==0)
        {
            if(a>b)
                printf("KPK = %d",a);
            else
                printf("KPK = %d",b);
        }
        else
        {
            if(a<b)
            {
                c=a;
              while(a%b!=0)
                {
                  a+=c;
                }
                printf("KPK = %d",a);
            }
            else
            {
                c=b;
              while(b%a!=0)
                {
                  b+=c;
                }
                printf("KPK = %d",b);
            }
        }
*/
/*

         printf("           => Program 4 <= \n");
         printf("         => Prime Number <= \n\n");

         int a, b=2, prima=0, n, counter=1;
         printf("Masukkan n bilangan prima pertama = ");
         scanf("%d", &n);

         while(counter<=n)
         {
             if(b==2)
             {
                 printf("%d ", b);
                 counter++;
             }
             for(a=2; a<b; a++)
             {
                 if(b%a==0)
                 {
                     prima=0;
                     break;
                 }
                 else
                     prima=1;
             }
             if(prima==1)
             {
                 printf("%d ", b);
                 counter++;
             } b++;
         }
         puts("");

*/
/*
         printf("           => Program 5 <= \n");
         printf("   => PRIME NUMBER WITH LIMITER <= \n\n");

         int bts,bil=2,div=2;
         printf("Masukkan batas bilangan prima : ");
         scanf("%d",&bts);


         while(bil<=bts)
         {
          if(bil==2||bil==3)
             {
                 printf("%d ",bil); bil++;
             }
          else
          {
          if(bil-1==div)
             {
                 printf("%d ",bil); div=2; bil++;
             }
          else if(bil%div==0)
             {
                 div=2; bil++;
             }
          else
             {
          div++;
             }
          }
         }
*/
/*
         printf("           => Program 6 <= \n");
         printf("       => Fibonacci Number <= \n\n");

         int a=0,b=1,c=0,i=0,cnt=0;

         printf("Berapa Bilangan Fibonacci Yang Akan Ditampilkan ? ");
         scanf("%d",&i);

         printf("%d ",b);

         cnt=cnt+2;

         while(cnt<=i)
         {
             cnt++;
             c=a+b;
             a=b;
             b=c;

             printf("%d ",c);
         }
         getch();
*/
         printf("           => Program 7 <= \n");
         printf("           => Leap Year <= \n\n");

         long long thn;
         printf("Masukkan Tahun : ");
         scanf("lld",&thn);

         if(thn%400==0)
            printf("\ntahun yang anda masukkan adalah tahun kabisat");
         else if (thn%100==0)
            printf("\ntahun yang anda masukkan bukan tahun kabisat");
         else if (thn%4==0)
            printf("\ntahun yang anda masukkan adalah tahun kabisat");
         else
            printf("\ntahun yang anda masukkan bukan tahun kabisat");



return 0;
}
