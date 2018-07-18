#include <stdio.h>
#define n 100

int pjgstr(char []);
void balikstr(char [], int);
void poli();

char kewalike[n];
char klmt[n];
int poli_cek=0;

int main(int argc, char **argv){
	int pjng;
	printf("Masukkan sebuah kalimat : ");
	gets(klmt);
	pjng = pjgstr(klmt);
	//printf("Panjang karakter = %d",pjng);
	balikstr(klmt,pjng);
	int a;
	printf("\nKarakter setelah dibalik : ");
	for(a=0;a<n;a++){
		printf("%c",kewalike[a]);
	}
	poli();
	if(poli_cek==1){
		printf("\ndibolak balik sama");
	}else if(poli_cek==0){
		printf("\ndibolak balik beda");
	}
	return 0;
}

int pjgstr(char sntn[]){
	char x;
	int count=0, a=0;
	for(;;){
		x = sntn[a];
		if(x=='\0'){
			break;
		}else{
			count++;
		}
		a++;
	}
	return count;
}

void balikstr(char kkkk[], int dowo){
	char l;
	int b,c=0,d=dowo-1;
	for(b=dowo;b>0;b--){
		l = kkkk[d];
		kewalike[c] = l;
		c++;
		d--;
	}
}

void poli(){
	int z,jml=0;
	char x,y;
	for(z=0;;z++){
		x = klmt[z];
		y = kewalike[z];
		if(klmt[z]==kewalike[z]){
			jml+=1;
		}else if(x=='\0' || y=='\0'){
			break;
		}
	}
	printf("z = %d",z);
}
