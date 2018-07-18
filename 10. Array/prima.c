#include <stdio.h>

int prima (int x);
main()
{
    int bil;
    printf("Masukkan bilangan : ");
    scanf("%i", &bil);

    if(prima(bil)==1)
        printf("%i adalah bilangan prima ", bil);
    else
        printf("%i bukanlah bilangan prima ", bil);
    printf("\n");
    return 0;
}

int prima(int x)
{
    int i, j;
    for(i=2;i<=x;i++)
    {
        if((x%i==0) && (i!=0))
           {
               j=0;
               break;
           }
        else if((x%i==0) && (i==0))
            {
                j=1;
                break;
            }
    }
    return j;
}
