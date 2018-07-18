#include <stdio.h>
#define n  1000

int itunginlah (char ayo[]);

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

    printf("\n\nCharacter lenght is %d Huruf \n",dowo);
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
