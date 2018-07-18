#include <stdio.h>

main()
{
    int a, *b, **c;

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);

    a = 155;
    b = &a;
    c = &b;

    printf("Nilai a = %d atau %d atau %d \n", a, *b, **c);
    printf("b = %p = alamat a di memori \n ", b);

}
