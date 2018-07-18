#include <stdio.h>
#include <math.h>

int x[13];
float data[13][3];

const float PI = 3.14159f;

void temp();
void deg();
float trigonometri();
float radian();

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");

	temp();
	deg();
}

void temp()
{
	int i,j;

	j=0;
	for(i=0;i<=360;i+=30)
    {
		x[j]=i;
		j++;
	}
}

void deg()
{
	int i;
	for(i=0;i<13;i++)
    {
		printf("%4i    ",x[i]);
		trigonometri(x[i]);
		printf("\n");
	}
}

float trigonometri(int d){
	printf("%4.1f",sin(radian(d)));
	printf("%7.1f",cos(radian(d)));
	printf("%10.1f",tan(radian(d)));
}

float radian(int d){
	return d / 180.0 * PI;
}
