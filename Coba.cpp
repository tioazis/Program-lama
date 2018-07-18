#include <stdio.h>
#include <string.h>
#define maxstack 100
#include <stack>

typedef int ItemType;

typedef struct
{
    int Item[maxstack];
    int Count;
}Stack;

void InitializeStack(Stack *s)
{
    s->Count = 0;
}

int Full(Stack *s)
{
    return (s->Count == maxstack);
}

void Push(ItemType x, Stack *s)
 {
     if (s->Count==maxstack)
        printf("Stack penuh! Data tidak dapat masuk!");
     else
     {
        s->Item[s->Count]=x;
        ++(s->Count);
     }
}

int Pop(Stack *s, ItemType *x)
{
    if (s->Count==0)
         printf("Stack masih kosong!");
    else
    {
        --(s->Count);
        *x = s->Item[s->Count];
    }
}

int main()
{
    int i,input;
    string hrf1[maxstack],hrf2[maxstack];
    Stack tumpuk;

    InitializeStack(&tumpuk);

    printf("Masukkan Kata : ");
    scanf("%s",hrf1);


    for(i=0;i<strlen(hrf1);i++)
    {
        Push(hrf1[i],&tumpuk);
        hrf2[i]=Pop(&tumpuk)
    }

    for (i=0;i<strlen(hrf1):i++)
    {
        printf("%s",hrf2[i]);
    }
}
