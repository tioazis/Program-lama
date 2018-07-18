
#include <stdio.h>

    main ()
    {

        printf("Azis Jabbar Susetio\n");
        printf("4210141021\n");
        printf("----------------------\n");


        int b;

        printf("masukkan sebuah bilangan : ");
        scanf("%d",&b);

        if(b%2==1)
            printf("bilangan %d Adalah ganjil",b);

        else
            printf("bilangan %d adalah genap",b);

/*
         double total_pembelian, discount = 0, n;//NO 1

         printf("Total pembelian   = Rp ");
         scanf("%lf", &total_pembelian);

         if(total_pembelian >= 100000)
             discount = 0.05 * total_pembelian;
         else
            total_pembelian=total_pembelian;


         printf("Besarnya discount = Rp %.2lf \n", discount);
         n=total_pembelian-discount;
         printf("harga total barang adalah =%.2lf \n",n);
*/
/*
         double bil1, bil2, hasil;

         printf("input bilangan 1 ");
         scanf("%lf",&bil1);

         printf("input bilangan 2 ");
         scanf("%lf",&bil2);

         if(bil2>0||bil2<0)
         {
            hasil=bil1/bil2;
            printf("hasilnya adalah %.3lf\n", hasil);
         }
         else
            printf("bilangan salah ! ulang lagi !\n");
*/

    }
