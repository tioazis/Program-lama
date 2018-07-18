#include <stdio.h>
#include <string.h>
#define MAKS 256

int main()
{
    int hasil;
    char teks[MAKS],teks2[MAKS];
    printf("Kalimat 1 : ");
    gets(teks);
    printf("Kalimat 2 : ");
    gets(teks2);
    hasil=strcmp(teks,teks2);
    return hasil;
}

