#include <stdio.h>
#include <stdlib.h>

main ()

{


        printf("Azis Jabbar Susetio\n");
        printf("4210141021\n");
        printf("----------------------\n");
/*
        printf(" --> PROGRAM 1 <-- \n\n");
        char kar;
        printf("Masukkan Karakter : ");


        while(kar != '\n')
        {
            getchar();
            break;
        }

        printf("Sudah Selesai Pak Proggramnya :v \n");


*/
/*
        printf(" --> PROGRAM 2 <-- \n\n");

        int i,n;

        printf("Masukkan Bilangan : \n");
        scanf("%d",&n);

        for(i=1;i<=n*3;i+=2)
        {
            if(i%3==0)
                continue;

            else
                printf(" %d ",i);

        }
*/
/*
        printf(" --> PROGRAM 3 <-- \n\n");
        int i,n;

        printf("Masukkan Angka : ");
        scanf("%d",&n);

        for(i=1;i<=n;i+=2)

            {
            if(i%7==0 || i%11==0)
               {
                continue;
               }
                printf("%d ",i);
            if(i>=97)
            {
                break;
            }
            }
*/
/*
        printf(" --> PROGRAM 4 <-- \n\n");
        int i,n,w=1,tot=0,cil,sar;
        double ave;
        printf("Berapa Nilai Yang Ingin Anda Masukkan ? \n");
        scanf("%d",&i);

        for(w;w<=i;w++)
        {
            printf("\nMasukkan Nilai Ke - %d : ",w);
            scanf("%d",&n);
            tot=n+tot;

            if(w==1)
            {
                sar=n;
                cil=n;
            }
            else if(w!=i+1)
            {
                if(n>sar)
                    sar=n;
                if(n<cil)
                    cil=n;
            }
        }
        ave=tot/i;
        printf("\n Rata-Rata Nilai Anda Adalah %0.2lf ",ave);
        printf("\n Nilai terbesar Anda Adalah %d ",sar);
        printf("\n Nilai Terkecil Anda Adalah %d",cil);
*/
/*
        printf(" --> PROGRAM 5 <-- \n\n");

        int i,a,b;
        printf("Masukkan Bilangan \n");
        scanf("%d",&i);

        for(a=1;a<=i;a++)
        {
            for(b=1;b<=i;b++)
        {
            printf("%d ",b);
        }
            printf("\n");
        }
*/
/*
        printf(" --> PROGRAM 6 <-- \n\n");

        int i,a,b;
        printf("Masukkan Bilangan \n");
        scanf("%d",&i);

        for(a=1;a<=i;a++)
        {
            for(b=a;b>0;b--)
        {
            printf("%d ",a);
        }
            printf("\n");
        }
*/

        printf(" --> PROGRAM 7 <-- \n\n");

        int a, b=2, prima=0, bil, counter=1;
	puts("~PROGRAM MENAMPILKAN BILANGAN PRIMA~\n");
	printf("Masukkan n bilangan prima pertama = ");
	scanf("%d", &bil);
	while(counter<=bil)
	{
		if(b==2){
			printf("%d ", b);
			counter++;
		}
		for(a=2; a<b; a++){
			if(b%a==0){
				prima=0;
				break;
			}
			else
                prima=1;
		}
		if(prima==1){
			printf("%d ", b);
			counter++;
		} b++;
		if(b<90)
            break;
	}
	puts("");






/*
        printf(" --> PROGRAM 8 <-- \n\n");

        int ank=0,n,a=0,naik;
        printf("Masukkan Jumlah Deret Bilangan Yang Akan Ditampilkan \n");
        scanf("%d",&n);

        while(a!=n)
            {
            for(naik=1;;naik++)
                {
                printf("%d  ",ank);

                ank+=naik;
                a+=1;

                if(a==n)
                    break;
                }
            }
*/

//      printf(" --> PROGRAM 9 <-- \n\n");

return 0;
}
