#include <stdio.h>
#include <string.h>
#define MAKS 256

void balikstr(char teks[MAKS])
{
    strrev(teks);
}

int main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
    char teks[MAKS];

    printf("Masukkan sebuah Kalimat : ");
    fgets(teks, sizeof teks, stdin);

    puts(teks);
    balikstr(teks);

    printf("Kalimat setelah dibalik : ");
    puts(teks);

    return 0;
}
