#include <stdio.h>
#include <string.h>

main()
{

   int pil,r,t;
   double hasil;
   printf("Menu\n 1. Menghitung Volume Kubus\n 2. Menghitung Luas Lingkaran\n 3. Menghitung Volume Tabung\n");
   printf("Masukkan pilihan\n");
   scanf("%d", &pil);
   switch(pil)
   {
        case 1:
            printf("Masukkan panjang sisi kubus\n");
            scanf("%d", &r);
            hasil = (double)r*r;
            break;
        case 2:
            printf("Masukkan jari2 lingkaran\n");
            scanf("%d", &r);
            hasil = (double)3.14*r*r;
            break;
        case 3:
            printf("Masukkan jari2 lingkaran\n");
            scanf("%d", &r);
            printf("Masukkan tinggi silinder\n");
            scanf("%d", &t);
            hasil = (double)3.14*r*r*t;
            break;
        default:
            printf("Inputan salah\n");
            break;
   }

   printf("Hasilnya adalah: %f\n", hasil);
   scanf("%f", hasil);

}
