#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
int main(){
	int confirm = 1;
	do{
  		int n, *a, pil, h=0;
  		system("cls");
		printf("1. C(n)= 2 * C(n-1) + 1 dengan C(0)=1\n");
		printf("2. S(n)= S(n-1) +n-1 dengan S(1)=0\n");
		printf("\nmasukan pilihan = ");
		scanf("%d",&pil);
		printf("masukkan n: ");
		scanf("%d",&n);
		printf ("\n");
		if (pil==1){
			a = (int *) malloc(sizeof(int));
			if (a== NULL){
				printf("Error saat malloc\n");
				exit(0);
			}else{
				*a=1;
				while (h!=n){
					*a = 2* (*a)+1;
					printf("%d ",*a);
					h++;
				}
				free (a);
			}
		}else if (pil==2){
			a = (int *) malloc(sizeof(int));
			if (a== NULL){
				printf("Error saat melakukan malloc\n");
				exit(0);
			}else{
				*a=0;
				while(h!=n){
					*a = *a +(h+1)-1;
					printf("%d ",*a);
					h++;
				}
				free (a);
			}
		}else{
			printf ("\nTidak ada pilihan\n");
		}
	printf ("\n\nIngin Mengulang lagi (1. ya 2.tidak )?\n"); scanf ("%d",&confirm);
	printf ("\n\n");
	system("cls");
	}while(confirm==1);
}
*/

// belajar switch case

float bil1, bil2;
float hasil=0;
char op;

scanf("%f %c %f", &bil1,&op,&bil2);

switch(op)
{
    case'+':
        hasil=bil1+bil2;
        break;
    case'-':
        hasil=bil1-bil2;
        break;
    case'*':
        hasil=bil1*bil2;
        break;
    case'/':
        hasil=bil1/bil2;
        break;
}
