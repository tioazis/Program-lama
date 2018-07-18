#include <stdio.h>

int masukan (int i);
int rerata (int dt,int nitot);

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
    int inp,total;
    printf("masukkan Jumlah data yang ingin dimasukkan : ");
    scanf("%d",&inp);
    total = masukan(inp);

    printf("\nTotal data adalah %d ",total);
    printf("\nRata rata adalah %d ",rerata(inp,total));


}

int masukan ( int i)
{
    int a,total=0,b;

    for(a=1;a<=i;a++)
    {
        printf("\nMasukkan data ke %d : ",a);
        scanf("%d",&b);

        total=total+b;
    }
    return(total);
}

int rerata(int dt, int nitot)
{
    int rata;
    rata=nitot/dt;

    return(rata);
}


