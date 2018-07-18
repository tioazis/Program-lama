#include<stdio.h>
#include<string.h>

void inshuruf(char x, int y);
char nama[1000][1000];
char print[10000][10000];

int main(){
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
	int a, b=0;
	printf("Masukkan nama anda : ");
	gets(nama[0]);
	for(a=0;a<strlen(nama[0]);a++){
		inshuruf(nama[0][a],a);
	}

	for(a=0;a<5;a++){
		for(b=0;b<strlen(nama[0])*7;b++){
			printf("%c", print[a][b]);
   	    }
   	    printf("\n");
	}

	return 0;
}

void inshuruf(char x,int y){
	int batas;
	if(y==0){
		batas=0;
	}
	else batas=y*7;

	if(x=='a' || x=='A'){
		print[0][batas]=' '; print[0][batas+1]='#'; print[0][batas+2]='#'; print[0][batas+3]='#'; print[0][batas+4]='#'; print[0][batas+5]=' '; print[0][batas+6]=' ';
		print[1][batas]='#'; print[1][batas+1]=' '; print[1][batas+2]=' '; print[1][batas+3]=' '; print[1][batas+4]=' '; print[1][batas+5]='#'; print[1][batas+6]=' ';
		print[2][batas]='#'; print[2][batas+1]='#'; print[2][batas+2]='#'; print[2][batas+3]='#'; print[2][batas+4]='#'; print[2][batas+5]='#'; print[2][batas+6]=' ';
		print[3][batas]='#'; print[3][batas+1]=' '; print[3][batas+2]=' '; print[3][batas+3]=' '; print[3][batas+4]=' '; print[3][batas+5]='#'; print[3][batas+6]=' ';
		print[4][batas]='#'; print[4][batas+1]=' '; print[4][batas+2]=' '; print[4][batas+3]=' '; print[4][batas+4]=' '; print[4][batas+5]='#'; print[4][batas+6]=' ';
		return;
	}
	if(x=='b' || x=='B'){
		print[0][batas]='#'; print[0][batas+1]='#'; print[0][batas+2]='#'; print[0][batas+3]='#'; print[0][batas+4]='#'; print[0][batas+5]=' '; print[0][batas+6]=' ';
		print[1][batas]='#'; print[1][batas+1]=' '; print[1][batas+2]=' '; print[1][batas+3]=' '; print[1][batas+4]=' '; print[1][batas+5]='#'; print[1][batas+6]=' ';
		print[2][batas]='#'; print[2][batas+1]='#'; print[2][batas+2]='#'; print[2][batas+3]='#'; print[2][batas+4]='#'; print[2][batas+5]=' '; print[2][batas+6]=' ';
		print[3][batas]='#'; print[3][batas+1]=' '; print[3][batas+2]=' '; print[3][batas+3]=' '; print[3][batas+4]=' '; print[3][batas+5]='#'; print[3][batas+6]=' ';
		print[4][batas]='#'; print[4][batas+1]='#'; print[4][batas+2]='#'; print[4][batas+3]='#'; print[4][batas+4]='#'; print[4][batas+5]=' '; print[4][batas+6]=' ';
		return;
	}
	if(x=='c' || x=='C'){
		print[0][batas]='#'; print[0][batas+1]='#'; print[0][batas+2]='#'; print[0][batas+3]='#'; print[0][batas+4]='#'; print[0][batas+5]='#'; print[0][batas+6]=' ';
		print[1][batas]='#'; print[1][batas+1]=' '; print[1][batas+2]=' '; print[1][batas+3]=' '; print[1][batas+4]=' '; print[1][batas+5]=' '; print[1][batas+6]=' ';
		print[2][batas]='#'; print[2][batas+1]=' '; print[2][batas+2]=' '; print[2][batas+3]=' '; print[2][batas+4]=' '; print[2][batas+5]=' '; print[2][batas+6]=' ';
		print[3][batas]='#'; print[3][batas+1]=' '; print[3][batas+2]=' '; print[3][batas+3]=' '; print[3][batas+4]=' '; print[3][batas+5]=' '; print[3][batas+6]=' ';
		print[4][batas]='#'; print[4][batas+1]='#'; print[4][batas+2]='#'; print[4][batas+3]='#'; print[4][batas+4]='#'; print[4][batas+5]='#'; print[4][batas+6]=' ';
		return;
	}
	if(x=='d' || x=='D'){
		print[0][batas]='#'; print[0][batas+1]='#'; print[0][batas+2]='#'; print[0][batas+3]='#'; print[0][batas+4]='#'; print[0][batas+5]=' '; print[0][batas+6]=' ';
		print[1][batas]='#'; print[1][batas+1]=' '; print[1][batas+2]=' '; print[1][batas+3]=' '; print[1][batas+4]=' '; print[1][batas+5]='#'; print[1][batas+6]=' ';
		print[2][batas]='#'; print[2][batas+1]=' '; print[2][batas+2]=' '; print[2][batas+3]=' '; print[2][batas+4]=' '; print[2][batas+5]='#'; print[2][batas+6]=' ';
		print[3][batas]='#'; print[3][batas+1]=' '; print[3][batas+2]=' '; print[3][batas+3]=' '; print[3][batas+4]=' '; print[3][batas+5]='#'; print[3][batas+6]=' ';
		print[4][batas]='#'; print[4][batas+1]='#'; print[4][batas+2]='#'; print[4][batas+3]='#'; print[4][batas+4]='#'; print[4][batas+5]=' '; print[4][batas+6]=' ';
		return;
	}
	if(x=='e' || x=='E'){
		print[0][batas]='#'; print[0][batas+1]='#'; print[0][batas+2]='#'; print[0][batas+3]='#'; print[0][batas+4]='#'; print[0][batas+5]='#'; print[0][batas+6]=' ';
		print[1][batas]='#'; print[1][batas+1]=' '; print[1][batas+2]=' '; print[1][batas+3]=' '; print[1][batas+4]=' '; print[1][batas+5]=' '; print[1][batas+6]=' ';
		print[2][batas]='#'; print[2][batas+1]='#'; print[2][batas+2]='#'; print[2][batas+3]='#'; print[2][batas+4]='#'; print[2][batas+5]='#'; print[2][batas+6]=' ';
		print[3][batas]='#'; print[3][batas+1]=' '; print[3][batas+2]=' '; print[3][batas+3]=' '; print[3][batas+4]=' '; print[3][batas+5]=' '; print[3][batas+6]=' ';
		print[4][batas]='#'; print[4][batas+1]='#'; print[4][batas+2]='#'; print[4][batas+3]='#'; print[4][batas+4]='#'; print[4][batas+5]='#'; print[4][batas+6]=' ';
		return;
	}
	if(x=='f' || x=='F'){
		print[0][batas]='#'; print[0][batas+1]='#'; print[0][batas+2]='#'; print[0][batas+3]='#'; print[0][batas+4]='#'; print[0][batas+5]='#'; print[0][batas+6]=' ';
		print[1][batas]='#'; print[1][batas+1]=' '; print[1][batas+2]=' '; print[1][batas+3]=' '; print[1][batas+4]=' '; print[1][batas+5]=' '; print[1][batas+6]=' ';
		print[2][batas]='#'; print[2][batas+1]='#'; print[2][batas+2]='#'; print[2][batas+3]='#'; print[2][batas+4]='#'; print[2][batas+5]='#'; print[2][batas+6]=' ';
		print[3][batas]='#'; print[3][batas+1]=' '; print[3][batas+2]=' '; print[3][batas+3]=' '; print[3][batas+4]=' '; print[3][batas+5]=' '; print[3][batas+6]=' ';
		print[4][batas]='#'; print[4][batas+1]=' '; print[4][batas+2]=' '; print[4][batas+3]=' '; print[4][batas+4]=' '; print[4][batas+5]=' '; print[4][batas+6]=' ';
		return;
	}
	if(x=='g' || x=='G'){
		print[0][batas]='#'; print[0][batas+1]='#'; print[0][batas+2]='#'; print[0][batas+3]='#'; print[0][batas+4]='#'; print[0][batas+5]='#'; print[0][batas+6]=' ';
		print[1][batas]='#'; print[1][batas+1]=' '; print[1][batas+2]=' '; print[1][batas+3]=' '; print[1][batas+4]=' '; print[1][batas+5]=' '; print[1][batas+6]=' ';
		print[2][batas]='#'; print[2][batas+1]=' '; print[2][batas+2]=' '; print[2][batas+3]='#'; print[2][batas+4]='#'; print[2][batas+5]='#'; print[2][batas+6]=' ';
		print[3][batas]='#'; print[3][batas+1]=' '; print[3][batas+2]=' '; print[3][batas+3]=' '; print[3][batas+4]=' '; print[3][batas+5]='#'; print[3][batas+6]=' ';
		print[4][batas]='#'; print[4][batas+1]='#'; print[4][batas+2]='#'; print[4][batas+3]='#'; print[4][batas+4]='#'; print[4][batas+5]='#'; print[4][batas+6]=' ';
		return;
	}
	if(x=='h' || x=='H'){
		print[0][batas]='#'; print[0][batas+1]=' '; print[0][batas+2]=' '; print[0][batas+3]=' '; print[0][batas+4]=' '; print[0][batas+5]='#'; print[0][batas+6]=' ';
		print[1][batas]='#'; print[1][batas+1]=' '; print[1][batas+2]=' '; print[1][batas+3]=' '; print[1][batas+4]=' '; print[1][batas+5]='#'; print[1][batas+6]=' ';
		print[2][batas]='#'; print[2][batas+1]='#'; print[2][batas+2]='#'; print[2][batas+3]='#'; print[2][batas+4]='#'; print[2][batas+5]='#'; print[2][batas+6]=' ';
		print[3][batas]='#'; print[3][batas+1]=' '; print[3][batas+2]=' '; print[3][batas+3]=' '; print[3][batas+4]=' '; print[3][batas+5]='#'; print[3][batas+6]=' ';
		print[4][batas]='#'; print[4][batas+1]=' '; print[4][batas+2]=' '; print[4][batas+3]=' '; print[4][batas+4]=' '; print[4][batas+5]='#'; print[4][batas+6]=' ';
		return;
	}
	if(x=='i' || x=='I'){
		print[0][batas]='#'; print[0][batas+1]='#'; print[0][batas+2]='#'; print[0][batas+3]='#'; print[0][batas+4]='#'; print[0][batas+5]='#'; print[0][batas+6]=' ';
		print[1][batas]=' '; print[1][batas+1]=' '; print[1][batas+2]='#'; print[1][batas+3]='#'; print[1][batas+4]=' '; print[1][batas+5]=' '; print[1][batas+6]=' ';
		print[2][batas]=' '; print[2][batas+1]=' '; print[2][batas+2]='#'; print[2][batas+3]='#'; print[2][batas+4]=' '; print[2][batas+5]=' '; print[2][batas+6]=' ';
		print[3][batas]=' '; print[3][batas+1]=' '; print[3][batas+2]='#'; print[3][batas+3]='#'; print[3][batas+4]=' '; print[3][batas+5]=' '; print[3][batas+6]=' ';
		print[4][batas]='#'; print[4][batas+1]='#'; print[4][batas+2]='#'; print[4][batas+3]='#'; print[4][batas+4]='#'; print[4][batas+5]='#'; print[4][batas+6]=' ';
		return;
	}
	if(x=='j' || x=='J'){
		print[0][batas]=' '; print[0][batas+1]='#'; print[0][batas+2]='#'; print[0][batas+3]='#'; print[0][batas+4]='#'; print[0][batas+5]=' ';
		print[1][batas]=' '; print[1][batas+1]=' '; print[1][batas+2]=' '; print[1][batas+3]='#'; print[1][batas+4]=' '; print[1][batas+5]=' ';
		print[2][batas]=' '; print[2][batas+1]=' '; print[2][batas+2]=' '; print[2][batas+3]='#'; print[2][batas+4]=' '; print[2][batas+5]=' ';
		print[3][batas]='#'; print[3][batas+1]=' '; print[3][batas+2]=' '; print[3][batas+3]='#'; print[3][batas+4]=' '; print[3][batas+5]=' ';
		print[4][batas]=' '; print[4][batas+1]='#'; print[4][batas+2]='#'; print[4][batas+3]=' '; print[4][batas+4]=' '; print[4][batas+5]=' ';
		return;
	}
	if(x=='k' || x=='K'){
		print[0][batas]='#'; print[0][batas+1]=' '; print[0][batas+2]=' '; print[0][batas+3]=' '; print[0][batas+4]='#'; print[0][batas+5]=' ';
		print[1][batas]='#'; print[1][batas+1]=' '; print[1][batas+2]=' '; print[1][batas+3]='#'; print[1][batas+4]=' '; print[1][batas+5]=' ';
		print[2][batas]='#'; print[2][batas+1]='#'; print[2][batas+2]='#'; print[2][batas+3]=' '; print[2][batas+4]=' '; print[2][batas+5]=' ';
		print[3][batas]='#'; print[3][batas+1]=' '; print[3][batas+2]=' '; print[3][batas+3]='#'; print[3][batas+4]=' '; print[3][batas+5]=' ';
		print[4][batas]='#'; print[4][batas+1]=' '; print[4][batas+2]=' '; print[4][batas+3]=' '; print[4][batas+4]='#'; print[4][batas+5]=' ';
		return;
	}
	if(x=='l' || x=='L'){
		print[0][batas]='#'; print[0][batas+1]=' '; print[0][batas+2]=' '; print[0][batas+3]=' '; print[0][batas+4]=' '; print[0][batas+5]=' ';
		print[1][batas]='#'; print[1][batas+1]=' '; print[1][batas+2]=' '; print[1][batas+3]=' '; print[1][batas+4]=' '; print[1][batas+5]=' ';
		print[2][batas]='#'; print[2][batas+1]=' '; print[2][batas+2]=' '; print[2][batas+3]=' '; print[2][batas+4]=' '; print[2][batas+5]=' ';
		print[3][batas]='#'; print[3][batas+1]=' '; print[3][batas+2]=' '; print[3][batas+3]=' '; print[3][batas+4]=' '; print[3][batas+5]=' ';
		print[4][batas]='#'; print[4][batas+1]='#'; print[4][batas+2]='#'; print[4][batas+3]='#'; print[4][batas+4]='#'; print[4][batas+5]=' ';
		return;
	}
	if(x=='m' || x=='M'){
		print[0][batas]='#'; print[0][batas+1]=' '; print[0][batas+2]=' '; print[0][batas+3]=' '; print[0][batas+4]='#'; print[0][batas+5]=' ';
		print[1][batas]='#'; print[1][batas+1]='#'; print[1][batas+2]=' '; print[1][batas+3]='#'; print[1][batas+4]='#'; print[1][batas+5]=' ';
		print[2][batas]='#'; print[2][batas+1]=' '; print[2][batas+2]='#'; print[2][batas+3]=' '; print[2][batas+4]='#'; print[2][batas+5]=' ';
		print[3][batas]='#'; print[3][batas+1]=' '; print[3][batas+2]=' '; print[3][batas+3]=' '; print[3][batas+4]='#'; print[3][batas+5]=' ';
		print[4][batas]='#'; print[4][batas+1]=' '; print[4][batas+2]=' '; print[4][batas+3]=' '; print[4][batas+4]='#'; print[4][batas+5]=' ';
		return;
	}
	if(x=='n' || x=='N'){
		print[0][batas]='#'; print[0][batas+1]=' '; print[0][batas+2]=' '; print[0][batas+3]=' '; print[0][batas+4]='#'; print[0][batas+5]=' ';
		print[1][batas]='#'; print[1][batas+1]='#'; print[1][batas+2]=' '; print[1][batas+3]=' '; print[1][batas+4]='#'; print[1][batas+5]=' ';
		print[2][batas]='#'; print[2][batas+1]=' '; print[2][batas+2]='#'; print[2][batas+3]=' '; print[2][batas+4]='#'; print[2][batas+5]=' ';
		print[3][batas]='#'; print[3][batas+1]=' '; print[3][batas+2]=' '; print[3][batas+3]='#'; print[3][batas+4]='#'; print[3][batas+5]=' ';
		print[4][batas]='#'; print[4][batas+1]=' '; print[4][batas+2]=' '; print[4][batas+3]=' '; print[4][batas+4]='#'; print[4][batas+5]=' ';
		return;
	}
	if(x=='o' || x=='O'){
		print[0][batas]=' '; print[0][batas+1]='#'; print[0][batas+2]='#'; print[0][batas+3]='#'; print[0][batas+4]='#'; print[0][batas+5]=' '; print[0][batas+6]=' ';
		print[1][batas]='#'; print[1][batas+1]=' '; print[1][batas+2]=' '; print[1][batas+3]=' '; print[1][batas+4]=' '; print[1][batas+5]='#'; print[1][batas+6]=' ';
		print[2][batas]='#'; print[2][batas+1]=' '; print[2][batas+2]=' '; print[2][batas+3]=' '; print[2][batas+4]=' '; print[2][batas+5]='#'; print[2][batas+6]=' ';
		print[3][batas]='#'; print[3][batas+1]=' '; print[3][batas+2]=' '; print[3][batas+3]=' '; print[3][batas+4]=' '; print[3][batas+5]='#'; print[3][batas+6]=' ';
		print[4][batas]=' '; print[4][batas+1]='#'; print[4][batas+2]='#'; print[4][batas+3]='#'; print[4][batas+4]='#'; print[4][batas+5]=' '; print[4][batas+6]=' ';
		return;
	}
	if(x=='p' || x=='P'){
		print[0][batas]='#'; print[0][batas+1]='#'; print[0][batas+2]='#'; print[0][batas+3]='#'; print[0][batas+4]=' '; print[0][batas+5]=' ';
		print[1][batas]='#'; print[1][batas+1]=' '; print[1][batas+2]=' '; print[1][batas+3]=' '; print[1][batas+4]='#'; print[1][batas+5]=' ';
		print[2][batas]='#'; print[2][batas+1]='#'; print[2][batas+2]='#'; print[2][batas+3]='#'; print[2][batas+4]=' '; print[2][batas+5]=' ';
		print[3][batas]='#'; print[3][batas+1]=' '; print[3][batas+2]=' '; print[3][batas+3]=' '; print[3][batas+4]=' '; print[3][batas+5]=' ';
		print[4][batas]='#'; print[4][batas+1]=' '; print[4][batas+2]=' '; print[4][batas+3]=' '; print[4][batas+4]=' '; print[4][batas+5]=' ';
		return;
	}
	if(x=='q' || x=='Q'){
		print[0][batas]=' '; print[0][batas+1]='#'; print[0][batas+2]='#'; print[0][batas+3]='#'; print[0][batas+4]=' '; print[0][batas+5]=' '; print[0][batas+6]=' ';
		print[1][batas]='#'; print[1][batas+1]=' '; print[1][batas+2]=' '; print[1][batas+3]=' '; print[1][batas+4]='#'; print[1][batas+5]=' '; print[1][batas+6]=' ';
		print[2][batas]='#'; print[2][batas+1]=' '; print[2][batas+2]='#'; print[2][batas+3]=' '; print[2][batas+4]='#'; print[2][batas+5]=' '; print[2][batas+6]=' ';
		print[3][batas]='#'; print[3][batas+1]=' '; print[3][batas+2]=' '; print[3][batas+3]='#'; print[3][batas+4]='#'; print[3][batas+5]=' '; print[3][batas+6]=' ';
		print[4][batas]=' '; print[4][batas+1]='#'; print[4][batas+2]='#'; print[4][batas+3]='#'; print[4][batas+4]=' '; print[4][batas+5]='#'; print[4][batas+6]=' ';
		return;
	}
	if(x=='r' || x=='R'){
		print[0][batas]='#'; print[0][batas+1]='#'; print[0][batas+2]='#'; print[0][batas+3]='#'; print[0][batas+4]=' '; print[0][batas+5]=' ';
		print[1][batas]='#'; print[1][batas+1]=' '; print[1][batas+2]=' '; print[1][batas+3]=' '; print[1][batas+4]='#'; print[1][batas+5]=' ';
		print[2][batas]='#'; print[2][batas+1]='#'; print[2][batas+2]='#'; print[2][batas+3]='#'; print[2][batas+4]=' '; print[2][batas+5]=' ';
		print[3][batas]='#'; print[3][batas+1]=' '; print[3][batas+2]=' '; print[3][batas+3]='#'; print[3][batas+4]=' '; print[3][batas+5]=' ';
		print[4][batas]='#'; print[4][batas+1]=' '; print[4][batas+2]=' '; print[4][batas+3]=' '; print[4][batas+4]='#'; print[4][batas+5]=' ';
		return;
	}
	if(x=='s' || x=='S'){
		print[0][batas]=' '; print[0][batas+1]='#'; print[0][batas+2]='#'; print[0][batas+3]='#'; print[0][batas+4]='#'; print[0][batas+5]='#'; print[0][batas+6]=' ';
		print[1][batas]='#'; print[1][batas+1]=' '; print[1][batas+2]=' '; print[1][batas+3]=' '; print[1][batas+4]=' '; print[1][batas+5]=' '; print[1][batas+6]=' ';
		print[2][batas]=' '; print[2][batas+1]='#'; print[2][batas+2]='#'; print[2][batas+3]='#'; print[2][batas+4]='#'; print[2][batas+5]=' '; print[2][batas+6]=' ';
		print[3][batas]=' '; print[3][batas+1]=' '; print[3][batas+2]=' '; print[3][batas+3]=' '; print[3][batas+4]=' '; print[3][batas+5]='#'; print[3][batas+6]=' ';
		print[4][batas]='#'; print[4][batas+1]='#'; print[4][batas+2]='#'; print[4][batas+3]='#'; print[4][batas+4]='#'; print[4][batas+5]=' '; print[4][batas+6]=' ';
		return;
	}
	if(x=='t' || x=='T'){
		print[0][batas]='#'; print[0][batas+1]='#'; print[0][batas+2]='#'; print[0][batas+3]='#'; print[0][batas+4]='#'; print[0][batas+5]='#'; print[0][batas+6]=' ';
		print[1][batas]=' '; print[1][batas+1]=' '; print[1][batas+2]='#'; print[1][batas+3]='#'; print[1][batas+4]=' '; print[1][batas+5]=' '; print[1][batas+6]=' ';
		print[2][batas]=' '; print[2][batas+1]=' '; print[2][batas+2]='#'; print[2][batas+3]='#'; print[2][batas+4]=' '; print[2][batas+5]=' '; print[2][batas+6]=' ';
		print[3][batas]=' '; print[3][batas+1]=' '; print[3][batas+2]='#'; print[3][batas+3]='#'; print[3][batas+4]=' '; print[3][batas+5]=' '; print[3][batas+6]=' ';
		print[4][batas]=' '; print[4][batas+1]=' '; print[4][batas+2]='#'; print[4][batas+3]='#'; print[4][batas+4]=' '; print[4][batas+5]=' '; print[4][batas+6]=' ';
		return;
	}
	if(x=='u' || x=='U'){
		print[0][batas]='#'; print[0][batas+1]=' '; print[0][batas+2]=' '; print[0][batas+3]=' '; print[0][batas+4]=' '; print[0][batas+5]='#'; print[0][batas+6]=' ';
		print[1][batas]='#'; print[1][batas+1]=' '; print[1][batas+2]=' '; print[1][batas+3]=' '; print[1][batas+4]=' '; print[1][batas+5]='#'; print[1][batas+6]=' ';
		print[2][batas]='#'; print[2][batas+1]=' '; print[2][batas+2]=' '; print[2][batas+3]=' '; print[2][batas+4]=' '; print[2][batas+5]='#'; print[2][batas+6]=' ';
		print[3][batas]='#'; print[3][batas+1]=' '; print[3][batas+2]=' '; print[3][batas+3]=' '; print[3][batas+4]=' '; print[3][batas+5]='#'; print[3][batas+6]=' ';
		print[4][batas]=' '; print[4][batas+1]='#'; print[4][batas+2]='#'; print[4][batas+3]='#'; print[4][batas+4]='#'; print[4][batas+5]=' '; print[4][batas+6]=' ';
		return;
	}
	if(x=='v' || x=='V'){
		print[0][batas]='#'; print[0][batas+1]=' '; print[0][batas+2]=' '; print[0][batas+3]=' '; print[0][batas+4]=' '; print[0][batas+5]='#'; print[0][batas+6]=' ';
		print[1][batas]='#'; print[1][batas+1]=' '; print[1][batas+2]=' '; print[1][batas+3]=' '; print[1][batas+4]=' '; print[1][batas+5]='#'; print[1][batas+6]=' ';
		print[2][batas]='#'; print[2][batas+1]=' '; print[2][batas+2]=' '; print[2][batas+3]=' '; print[2][batas+4]=' '; print[2][batas+5]='#'; print[2][batas+6]=' ';
		print[3][batas]=' '; print[3][batas+1]='#'; print[3][batas+2]=' '; print[3][batas+3]=' '; print[3][batas+4]='#'; print[3][batas+5]=' '; print[3][batas+6]=' ';
		print[4][batas]=' '; print[4][batas+1]=' '; print[4][batas+2]='#'; print[4][batas+3]='#'; print[4][batas+4]=' '; print[4][batas+5]=' '; print[4][batas+6]=' ';
		return;
	}
	if(x=='w' || x=='W'){
		print[0][batas]='#'; print[0][batas+1]=' '; print[0][batas+2]=' '; print[0][batas+3]=' '; print[0][batas+4]=' '; print[0][batas+5]=' '; print[0][batas+6]='#'; print[0][batas+7]=' ';
		print[1][batas]='#'; print[1][batas+1]=' '; print[1][batas+2]=' '; print[1][batas+3]='#'; print[1][batas+4]=' '; print[1][batas+5]=' '; print[1][batas+6]='#'; print[1][batas+7]=' ';
		print[2][batas]='#'; print[2][batas+1]=' '; print[2][batas+2]=' '; print[2][batas+3]='#'; print[2][batas+4]=' '; print[2][batas+5]=' '; print[2][batas+6]='#'; print[2][batas+7]=' ';
		print[3][batas]='#'; print[3][batas+1]=' '; print[3][batas+2]='#'; print[3][batas+3]=' '; print[3][batas+4]='#'; print[3][batas+5]=' '; print[3][batas+6]='#'; print[3][batas+7]=' ';
		print[4][batas]=' '; print[4][batas+1]='#'; print[4][batas+2]=' '; print[4][batas+3]=' '; print[4][batas+4]=' '; print[4][batas+5]='#'; print[4][batas+6]=' '; print[4][batas+7]=' ';
		return;
	}
	if(x=='x' || x=='X'){
		print[0][batas]='#'; print[0][batas+1]=' '; print[0][batas+2]=' '; print[0][batas+3]=' '; print[0][batas+4]='#'; print[0][batas+5]=' ';
		print[1][batas]=' '; print[1][batas+1]='#'; print[1][batas+2]=' '; print[1][batas+3]='#'; print[1][batas+4]=' '; print[1][batas+5]=' ';
		print[2][batas]=' '; print[2][batas+1]=' '; print[2][batas+2]='#'; print[2][batas+3]=' '; print[2][batas+4]=' '; print[2][batas+5]=' ';
		print[3][batas]=' '; print[3][batas+1]='#'; print[3][batas+2]=' '; print[3][batas+3]='#'; print[3][batas+4]=' '; print[3][batas+5]=' ';
		print[4][batas]='#'; print[4][batas+1]=' '; print[4][batas+2]=' '; print[4][batas+3]=' '; print[4][batas+4]='#'; print[4][batas+5]=' ';
		return;
	}
	if(x=='y' || x=='Y'){
		print[0][batas]='#'; print[0][batas+1]=' '; print[0][batas+2]=' '; print[0][batas+3]=' '; print[0][batas+4]='#'; print[0][batas+5]=' ';
		print[1][batas]=' '; print[1][batas+1]='#'; print[1][batas+2]=' '; print[1][batas+3]='#'; print[1][batas+4]=' '; print[1][batas+5]=' ';
		print[2][batas]=' '; print[2][batas+1]=' '; print[2][batas+2]='#'; print[2][batas+3]=' '; print[2][batas+4]=' '; print[2][batas+5]=' ';
		print[3][batas]=' '; print[3][batas+1]=' '; print[3][batas+2]='#'; print[3][batas+3]=' '; print[3][batas+4]=' '; print[3][batas+5]=' ';
		print[4][batas]=' '; print[4][batas+1]=' '; print[4][batas+2]='#'; print[4][batas+3]=' '; print[4][batas+4]=' '; print[4][batas+5]=' ';
		return;
	}
	if(x=='z' || x=='Z'){
		print[0][batas]='#'; print[0][batas+1]='#'; print[0][batas+2]='#'; print[0][batas+3]='#'; print[0][batas+4]='#'; print[0][batas+5]='#'; print[0][batas+6]=' ';
		print[1][batas]=' '; print[1][batas+1]=' '; print[1][batas+2]=' '; print[1][batas+3]=' '; print[1][batas+4]='#'; print[1][batas+5]=' '; print[1][batas+6]=' ';
		print[2][batas]=' '; print[2][batas+1]=' '; print[2][batas+2]='#'; print[2][batas+3]='#'; print[2][batas+4]=' '; print[2][batas+5]=' '; print[2][batas+6]=' ';
		print[3][batas]=' '; print[3][batas+1]='#'; print[3][batas+2]=' '; print[3][batas+3]=' '; print[3][batas+4]=' '; print[3][batas+5]=' '; print[3][batas+6]=' ';
		print[4][batas]='#'; print[4][batas+1]='#'; print[4][batas+2]='#'; print[4][batas+3]='#'; print[4][batas+4]='#'; print[4][batas+5]='#'; print[4][batas+6]=' ';
		return;
	}
	if(x==' '){
		print[0][batas]=' ';
		print[1][batas]=' ';
		print[2][batas]=' ';
		print[3][batas]=' ';
		print[4][batas]=' ';
	}
	if(x=='.'){
		print[0][batas]=' '; print[0][batas+1]=' '; print[0][batas+2]=' ';
		print[1][batas]=' '; print[1][batas+1]=' '; print[1][batas+2]=' ';
		print[2][batas]=' '; print[2][batas+1]=' '; print[2][batas+2]=' ';
		print[3][batas]='#'; print[3][batas+1]='#'; print[3][batas+2]=' ';
		print[4][batas]='#'; print[4][batas+1]='#'; print[4][batas+2]=' ';
	}

}
