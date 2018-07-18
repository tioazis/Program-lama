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
    int i,f;
    char kata[maks];

    printf("Masukkan Kalimat : ");
    gets(kata);

    for(i=0;i<strlen(kata);i++)
    {
        push(kata[i]);
    }

    f=0;
    for(i=0;i<strlen(kata);i++)
    {
        if(kata[i]==nilaiatas())
        {
            pop();
        }
       else
       {
           f++;
           printf("\nKata tersebut Bukan palindrom\n");
           break;
       }
    }

    if (f==0)
        printf("\nKata tersebut adalah palindrom\n");
    return 0;
}
