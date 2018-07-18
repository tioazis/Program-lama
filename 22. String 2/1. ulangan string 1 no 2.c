#include <stdio.h>
#include <string.h>
#define MAKS 100

int itungin ( char text[MAKS])
{
    int t;
    t = strlen(text);
    return (t);
}

main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
    char text [MAKS];
    int t;
    printf("\nMasukin bro : ");
    fgets(text, sizeof MAKS, stdin);

    t = itungin(text);
    printf("\nJumlah huruf dalam kata ada %d\n",t);

}
