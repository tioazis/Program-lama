#include <stdio.h>

main()
{
     char *days[]= {"sun","mon","wed","thu","fri","sat"};

     int i;
     printf("%p\n\n", &i);

     for (i=0;i<6;i++)
     {
        printf("%s\n", days [i]);
        printf("%p\n", days [i]);
     }

}
