#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
 {
    printf("Azis Jabbar Susetio\n");
    printf("4210141021\n");
    printf("........................\n");
/*
    int i, n;

    printf("Tugas 5 Percobaan 1\n");
    printf("Masukkn jumlah bilangan ganjil yang ingin ditampilkan !  \n\n");
    scanf("%d",&n);
    printf("berikut adalah %d jumlah bilangan ganjil\n", n);

    for(i=1; i<=n*2 ;i+=2 )
        {

            printf("%d ",i);
        }

*/
/*
    int n, jumlah=0, i;

    printf("\n tugas 5 percobaan 2 \n");
    printf("\n masukkan suku bilangan : \n");
    scanf("%d", &n);
    jumlah=0;
    for(i=n; i>0; i--)
    {
        if(i!=n)
        {
            printf(" + ");}
            jumlah+=i;
            printf("%d", i);
        }
    printf(" = %d\n", jumlah);
*/
/*
    printf("\npercobaan 3\n\n");

    int x;

    for (x=90; x>=65; x--)

    {
        printf("%c ", x);
    }
*/
/*
     int i, n, tot;

     printf("Percobaan 4\n\n");
     printf("Masukkan Bilangan : ");
     scanf("%d", &n);

     for (i=1; i<=n; i++)
     {
         if(i%2==0)
         {
             tot = -i;
         }
         else
         {
             tot = i;
         }

         printf("%d ", tot);

     }
*/
/*
    int n,i,j,test=0;

    printf("Percobaan 5\n\n");
	printf("Masukkan Bilangan : \n");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			{test++;}

    }
	if(test>2)
		{
         printf("%d bukan bilangan prima", n);
        }
	else
		{
        printf("%d jelas bilangan prima", n);
        }
*/

    int i, nilai, jam, Nilai_Total = 0, sub_nilai = 0, Jam_Total = 0;
    printf("Percobaan 6\n");
	float ips;
	char kategori;

    for(i=1; i<=5; i++)
    {

    	printf("Masukkan Nilai Mata Kuliah Anda %d : ", i);
    	scanf("%c", &kategori);fflush(stdin);
		printf("Masukkan Jumlah Jam Kuliah Anda %d : ", i);
		scanf("%d", &jam);fflush(stdin);

		if     (kategori == 'a' || kategori == 'A')
		{
			nilai = 4;
		}
		else if(kategori == 'b' || kategori == 'B')
		{
			nilai = 3;
		}
		else if(kategori == 'c' || kategori == 'C')
		{
			nilai = 2;
		}
		else if(kategori == 'd' || kategori == 'D')
		{
			nilai = 1;
		}
		else if(kategori == 'e' || kategori == 'E')
		{
			nilai = 0;
		}

    	Jam_Total 	= Jam_Total+jam;
    	sub_nilai	= nilai * jam;
    	Nilai_Total = Nilai_Total+sub_nilai;
    	ips			= Nilai_Total/Jam_Total;
    }
    printf(" IPS = %d / %d = %.2f\n", Nilai_Total, Jam_Total, ips);

/*
    int i;

    for(i=1;i<=10000000000;i+=1000000000000)
    {
        printf("i = %d\n",i);
    }

    getchar();
    */
/*
    int i;
    i=500000;

    while(1<=5000000)
    {
      printf("azis ganteng sejawa bali dan sumatra dan sepapuanugini se amerika barat\n");
      i+=100000;
    }
*/
/*
    int i=1;

    while(i<=2)
    {
        printf("AJISSS");

    }
    */
 }






