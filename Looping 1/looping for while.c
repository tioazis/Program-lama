#include <stdio.h>

main ()

{
        printf("Azis Jabbar Susetio\n");
        printf("4210141021\n");
        printf("----------------------\n");

/*
        printf("program 1\n");
        int bil;


        for(bil=1;bil<=20;bil++)
        {
            printf("bil = %d\n",bil);
        }
*/
/*
        printf("program 1\n");

        int i, jml=0, anu;
        printf("masukkan jumlah bilangan trianguler yang akan dihitung \n");
        scanf("%d",&i);

        for(anu=i;anu>0;anu--)
        {
            jml=jml+anu;

        }

        printf("bilangan trianguler %d adalah %d\n\n",i,jml);
*/
/*
        printf("percobaan 3\n\n");
        int i;
        for(i=65;i<=90;i++)
        {
            printf(" %c \n",i);
        }
*/
/*
        printf("percobaan 4\n\n");
        int i;
        for(i=90;i>=65;i--)
        {
            printf(" %c \n",i);
        }
*/
/*
        printf("percobaan 5\n\n");

        int i,n;
        printf("masukkan bilangan ganjil yang akan ditampilkan \n");
        scanf("%d",&n);

        for(i=1;i<n*2;i+=2)
        {
            printf("%d ",i);
        }
*/
/*
        printf("percobaan 6\n\n");

        int i,n;
        printf("masukkan sembarang bilangan\n\n");
        scanf("%d",&n);

        for(i=1;i<=n;i++1
                printf("%d ",i);
        }
*/
/*
        int i,n;

        printf("percobaan 7\n\n");
        printf("masukkan sembarang bilangan \n" );
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
           if(i==n)
           {
            printf("%d",i);
           }
           else
            printf("%d * ",i);
        }


*/

        printf("percobaan 8\n\n");

        char ya;
        int i,n=0,w=0;

        while(1)
        {
            w++;
            printf("\nmasukkan bilangan ke - %d: \n",w);
            scanf("%d",&i);

            printf("Mau Memasukkan Data Lagi  ? [y/t]  ");
            getchar();
            scanf("%c",&ya);

            n=n+i;
            if(ya == 'y')
                {

                    continue;
                }
            else
                break;

            system("cls");
        }

        printf("\nhasil penjumlahan adalah %d\n\n ",n);

/*
    printf("percobaan 9\n\n");
        char ya;
        int i,n=0,w=0,maks,minss,x=1;
        double ave;

        while(1)
        {
            w++;
            printf("\nmasukkan bilangan ke - %d: \n",w);
            scanf("%d",&i);
            if(w==1)
            {
                maks=i;
                minss=i;
            }
            else if(i>maks)
            {
                maks=i;
            }
            else if(i<minss)
            {
                minss=i;
            }

            printf("Mau Memasukkan Data Lagi  ? [y/t]  ");
            getchar();
            scanf("%c",&ya);

            n=n+i;
            ave=n/w;
            if(ya == 'y')
                {
                    continue;
                }
            else
                break;

        }
        printf("\nhasil penjumlahan adalah %d\n\n",n);
        printf("nilai minimum adalah %d  \n",minss);
        printf("nilai makasimum adalah %d  \n",maks);
        printf("rata rata adalah %0.2lf",ave);

*/
    printf("percobaan 10\n\n");

        int jumkar=0,jumspas=0;
        char kar;

        printf("Ketikkan Kalimat Sesuka Anda ! \n\n");
        scanf("%c",&kar);

        while((kar=getchar()) != '\n' )
        {
            jumkar++;
            if(kar== ' ')
                jumspas++;
        }

        printf("jumlah karakter adalah %d \n", jumkar);
        printf("jumlah Spasi adalah %d \n", jumspas);





return 0;
}
