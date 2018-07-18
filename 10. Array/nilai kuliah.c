#include <stdio.h>

int nilai [4][5] = {{1,81,90,62,0},{2,50,83,87,0},{3,89,55,65,0},{4,77,70,92,0}};
int i,j;
float total;

void output(int nilai[4][5]);
main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");

    for(i=0;i<4;i++)
    {
        total=0;
        for(j=1;j<4;j++)
        {
            total=total+nilai[i][j];
            nilai[i][4]=total/3;
        }
    }
    printf("\n");
    output(nilai);
}

void output (int nilai [4][5])
{
    int i,j;
    printf("| NO | BHS | MAT | DIG | AVE |\n");
    printf("-------------------------------\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%4d |",nilai[i][j]);
        }
    printf("\n");
    }
    printf("-------------------------------\n");
}
