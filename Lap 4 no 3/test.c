#include <stdio.h>
#include <string.h>

main()
{
   int pil,r,t;
   double hasil;
   printf("Menu\n 1. Menghitung Volume Kubus\n 2. Menghitung Luas Lingkaran\n 3. Menghitung Volume Tabung\n");
   printf("Masukkan pilihan\n");
   scanf("%d", &pil);
   switch(pil) //pil untuk menentukan menu mana yang akan dieksekusi
   {
        case 1: //case ini akan terpiliih jika pil berisi 1
            printf("Masukkan panjang sisi kubus\n");
            scanf("%d", &r);
            hasil = (double)r*r; //penambahan "(double)" berfungsi untuk casting, agar hasil perhitungan berbentuk double
            break;
        case 2: //case ini akan terpiliih jika pil berisi 2
            printf("Masukkan jari2 lingkaran\n");
            scanf("%d", &r);
            hasil = (double)3.14*r*r;
            break;
        case 3: //case ini akan terpiliih jika pil berisi 3
            printf("Masukkan jari2 lingkaran\n");
            scanf("%d", &r);
            printf("Masukkan tinggi silinder\n");
            scanf("%d", &t);
            hasil = (double)3.14*r*r*t;
            break;
        default: //case ini akan terpilih jika nilai pil tidak sama dengan 1/2/3
            printf("Inputan salah\n");

            break;
   }

   printf("Hasilnya adalah: %f\n", hasil); //syntax ini baru akan tereksekusi setelah semua pilihan switch terlewati
   scanf("%f", &hasil);
}
