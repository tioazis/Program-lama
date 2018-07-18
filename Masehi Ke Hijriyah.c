#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *nmblnh[] = {"Muharram","Shafar","Rabi'ul Awal","Rabi'ul Akhir","Jamadil Awal","Jamadil Akhir","Ra'jab","Sya'ban","Ramadhan","Syawwal","Dzulqa'dah","Zulhijjah"};
char *nmblnm[] = {"Januari","Februari","Maret","April","Mei","Juni","Juli","Agustus","September","Oktober","November","Desember" };

int cekkabisatm(int thn)//untuk mengecek tahun kabisat, jika yang di cek termasuk tahun kabisat maka return value akan beruba tanggal 29 untuk bulan 2
{
    if (thn%400==0)
        return 29;
    else if (thn%100==0)
        return 28;
    else if (thn%4==0)
        return 29;
    else
        return 28;
}
int cekhrblnm(int bln, int thn)
{
    int days=0,i=0;
    for(i=1;i<=bln;i++)
    {
        if (i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
           days+=31;
        else if (i==2)
        {
            if(cekkabisatm(thn)==29)
                days+=29;
            if(cekkabisatm(thn)==28)
                days+=28;
        }
        else
            days+=30;
    }

    return days;
}

int cekkabisath(int sisdaur)
{
    int i=0,cek=0,kab=0;
    for(i=0;i<=sisdaur;i++)
    {
        if( i==2 || i==5 || i==7 || i==10 || i==13 || i==16 || i==18 || i==21 || i==24 || i==26 || 1==29 )
            kab+=1;
        else
            continue;

    }

    return kab;
}

int main ()
{
    char x;
    do
    {
    int tglm=0,blnm=0,thnm=0;
    int a=0,b=0;//koreksi gregorian
    int jumhar=0,jumharb=0;
    int sklsm=0, ssklsm=0;
    int jumharh=0;
    int daur=0, sdaur=0,ssdaur=0 , thnh=0;
    int sisathn=0, sisahr=0;
    int blnh=0, tglh=0;

    printf("\n     ===||================================================||==");
    printf("\n    ====||             PROJEK AKHIR SEMESTER 1            ||===");
    printf("\n   =====||                 PROGRAM KONVERSI               ||====");
    printf("\n =======||            PENANGGALAN SISTEM MASEHI           ||======");
    printf("\n =======||                       KE                       ||======");
    printf("\n   =====||           PENANGGALAN SISTEM HIJRIYAH          ||===");
    printf("\n    ====||               OLEH : 4210141021                ||===");
    printf("\n     ===||================================================||==");


    do
    {
    printf("\n\n   Silahkan Masukkan Tanngal Masehi Dengan Format : ");
    printf("\n   dd-mm-yyyy ( Tanggal-Bulan-Tahun ) = ");
    scanf ("%d-%d-%d",&tglm,&blnm,&thnm);

    if (thnm<=0 || blnm>12 || blnm<=0 || tglm >31 || tglm<=0)
	printf ("   Input tidak valid\n");


    }

    while (thnm<=0 || blnm>12 || blnm<=0 || tglm >31 || tglm<=0 );
    printf("\n\n   %d - %s - %d  M = ", tglm, nmblnm[blnm-1], thnm);
    //step 1 (hitung hari total)
                                                //======================================================//
    if( thnm>=1701 && thnm<=1801 )              // ini adalah  kondisi  macam-macam  koreksi  gregorian //
        a=1;                                    // yang hanya terjadi dalam  ketiga  kondisi si samping //
    else if ( thnm >= 1801 && thnm <= 1901)     // kondisi ini sangat penting karena dapat mempengaruhi //
        a=2;                                    // angka untuk pengurangan hasil  selisih antara  tahun //
    else if( thnm>=1901)                        // masehi dengan tahun hijriyah.                        //
        a=3;                                    //======================================================//

    if (tglm>=15 && blnm==10 && thnm==1582 || thnm==1582 && blnm>10 || thnm>1582 )
        b=10;
    else
        b=0;


    blnm-=1;
    jumharb=cekhrblnm(blnm,thnm);
    thnm-=1;


    ssklsm=thnm%4;
    sklsm=(thnm-ssklsm)/4;
    sklsm=sklsm*1461;
    ssklsm*=365;

    jumhar = ssklsm + sklsm + jumharb + tglm;

    //step 2(konversi kembali hari dalam hijriah ke format dd-mm-yyyy)
    jumharh = jumhar-227016-a-b;//(tafawut dan koreksi greogian)

    //227016 adalah tafawut adalah selisih hari antara hijriyah dan masehi
    //13 adalah koreksi gregorian ( ada sejarahnya sendiri )

    sdaur = jumharh%10631;
    daur = (jumharh-sdaur)/10631;

    thnh = daur * 30; // didapatkan jumlah tahun sementara

    sisathn=sdaur/354;//mendapatkan tahun tambahan tetapi tidak memperhitungkan kabisat
    sisahr=sdaur%354;//dihasilkan hari yang akan dikonversi ke bulan

    sisahr-=cekkabisath(sisathn);//agar didapatkan jumlah hari yang sebenarnya, karena yang sebelumnya masih termasuk hari kabisat.

    thnh+=sisathn;


    blnh=sisahr/30;
    tglh=(sisahr%30)+(blnh/2);

    blnh+=1;
    thnh+=1;

    printf("%d - %s - %d H \n\n", tglh,nmblnh[blnh-1],thnh);


    do
    {
	printf ("\n   Apakah Anda ingin keluar Program[y/t]? ");
    scanf ("%c",&x);

	x=getchar();
	}
	while (x!='t' && x!='T' && x!='y' && x!='Y');
	if (x=='t' || x=='T')
        system("cls");
    }
	while (x!='Y' && x!='y');

}
