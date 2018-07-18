#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
 {
    printf("Azis Jabbar Susetio\n");
    printf("4210141021\n");
    printf("........................\n");
/*
    char i;

    puts("Monggo Masukkan Karakter !\n");
    printf("masukkan x untuk menampilkan karakter\n");


    while(i!='x')
    {
        scanf("%c",&i);
    }

    printf("%c\n", i);

*/
/*
    int jml=0, i, hitung=1, pilih;

    while (pilih != 't' && pilih != 'T')

    {
        printf("Silahkan Masukkan bilangan ke-%d : ", hitung); scanf("%d", &i);
        printf("Mau memasukkan data lagi [y/t] ? : "); scanf("%d", &pilih);
        pilih=getchar();
        printf("\n");
        jml=jml+i;
        hitung++;
    }

    printf("Total Bilangan: %d", jml);
*/
/*
int no=0,n,tot=0,max=1,min;

	float rata;
	char pilih='y';

	while(pilih=='y')
        {
            no++;

            printf("Masukkan bilangan ke-%d : ",no);
            scanf("%d",&n);
            printf("Ingin memasukkan data lagi ? [y/t] ");
            getchar();
            scanf("%c",&pilih);
            tot = tot + n;

            if(n>max)
                {max = n;}
            if(no==1)
                {
                    min = n;
                }
            else
                {
                    if(n<min)
                    {min = n;}
                }
            printf("\n");
        }

	rata = tot/no;

	printf("Jumlah Semua Bilangan Adalah %d\n",tot);
	printf("Rata-Rata dari semua bilangan adalah %g\n",rata);
	printf("Nilai Maksimum adalah  %d\n",max);
	printf("Nilai Minimum  adalah %d",min);
*/
/*
    int i, sum=1, tot=0;

   	printf("Masukkan suatu bilangan : ");
    scanf("%d", &i);

    while (sum<=i)
    {
    	printf("%d ", tot);
		tot = tot + sum;
    	sum++;
    }
*/
/*
    char karakter;
	int total_karakter = 0, total_spasi = 0;

	puts("Silahkan Masukkan Sebuah Kalimat : ");

	while ((karakter = getchar()) != '\n')
        {
            total_karakter++;
            if(karakter== ' ')
                {total_spasi++;}
        }

    printf("\n Jumlah spasi = %d", total_spasi);
	printf("\n Jumlah karakter = %d", total_karakter);
*/
/*
    int input, input1, i = 1, total = 0, divider = 1;


	printf("masukkan 4 buah angka  : ");
  	scanf("%d", &input);

  	input1 = input;

  	while(input!=0)
	{
  		while(i<=9)
		{
    		if ( (input - i) % 10 == 0 )
			{
         		total += i;
         		input -= i;
         		input /= 10;
         		divider *= 10;
         		i = 0;
    		}
     		i++;
   		}
	}

  	divider /= 10;
  	i = 0;Masukkan angka daengan satuan ribuan

  	while(divider!=1)
	{
   		while(i<=9)
		{
    		if ( (input1 - (i * divider)) / divider == 0 )
			{
        		input1 = (input1 - (i * divider));
        		if (divider != 1)
				{
         			printf("%d + ",i);
         			divider /= 10;
        		}
				else
				{
         			printf("%d = ",i);
        		}
        		i = 0;
    		}
     		i++;
   		}
  	}
  	printf("%d\n",total);
*/
    int a, b, c, d, hitung, bln, bunga;

	printf("Masukkan berapa biaya awal : ");
    scanf("%d", &a);
    printf("Berapa cicilan yang mampu dibayarkan tiap bulan : ");
    scanf("%d", &b);
    printf("Berapa rata-rata kenaikan tiap tahun (%%) : ");
    scanf("%d", &c);

    bln = 0;
    bunga = a * c / 100;
    hitung = a;

    while(hitung>=0)
    {
    	if(bln%12 == 0 && bln != 0)
    	{
    		hitung += bunga;
    	}
    	hitung -= b;
    	bln++;
    }
    printf("Waktu yang dibutuhkan untuk melunasi biaya haji adalah %d bulan", bln);
return 0;
 }
