#include <stdio.h>
#define MAKS 100

int fibonacci(int[]);
int input (int[]);
int jml;

main()
{   printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");

    int data[MAKS],a=0,b=1,i,n;
    printf("masukkan batas fibonacci : ");
    scanf("%d",&n);

    for(i=0;;i++)
    {
        if(i==0||i==1)
        {
            data[i]=i;
            printf("%d ",data[i]);
        }
        else
        {
            data[i]=b+a;
            a=b;
            b=data[i];
            if(data[i]>n)
                break;
            else
                printf("%d ",data[i]);
        }
    }
}

