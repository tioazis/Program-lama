#include<stdio.h>
#include<string.h>
#define maks 100

typedef struct
{
    char kata [maks];
    int top;
}Stack;

Stack kalimat;

void push(char x)
{
    kalimat.top++;
    kalimat.kata[kalimat.top]=x;
}

void pop ()
{
    kalimat.kata[kalimat.top]=0;
    kalimat.top--;
}

char nilaiatas()
{
    return kalimat.kata[kalimat.top];
}
int main()
{
    int i;
    char kata[maks];

    printf("Masukkan Kalimat : ");
    gets(kata);

    for(i=0;i<strlen(kata);i++)
    {
        push(kata[i]);
    }

    printf("\nHasil Dibalik : ");
    for(i=0;i<strlen(kata);i++)
    {
        printf("%c",nilaiatas());
        pop();
    }
    return 0;
}
