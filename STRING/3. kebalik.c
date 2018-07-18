#include <stdio.h>
#define n  1000

int itunginlah (char ayo[]);
void balikindong (char [], int );
char balikin[n];

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
    int dowo;
    char kata[n];

    printf("\nInsert Kalimat : ");
    gets(kata);

    dowo=itunginlah(kata);

    printf("\nCharacter lenght : %d Huruf \n",dowo);
    balikindong(kata,dowo);

    int p;
    printf("\nCharacter setelah dibalik : ");
    for(p=0;p<n;p++)
    {
        printf("%c",balikin[p]);
    }
}

int itunginlah(char ayo[])
{
    char x;
    int itung=0,a=0;

    while(1)
    {
        x=ayo[a];
        if(x=='\0'){
            break;}
        else{
            itung++;}
        a++;
    }
    return(itung);
}

void balikindong(char tumpah[], int katanya)
{
    char i;
    int x, y=0,z=katanya-1;

    for(x=katanya;x>0;x--)
    {
        i=tumpah[z];
        balikin[y]=i;
        y++;
        z--;
    }
}

