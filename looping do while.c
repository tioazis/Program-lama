#include<stdio.h>

main()
 {
    int bil, digit_kanan;
    printf("Masukkan bilangan yang mau dibalik : ");
    scanf("%d", &bil);
    printf("Hasil pembalikannya = ");

    while(bil != 0)

     {
        digit_kanan = bil % 10;
        printf("%d", digit_kanan);
        bil = bil / 10;
     }

     printf("\n");


  /*
   char asu; //got it fucked ass hole ashhahahah

   while(asu!= 'X')
   {
       asu= getchar();
   }

   */


 }


