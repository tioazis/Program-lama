
main()
{
    printf("\n    =|------------------------|=\n");
    printf("   ==|   Azis Jabbar Susetio  |==\n");
    printf("  ===|       4210141021       |===\n");
    printf("   ==| 1 - D4 Game Technology |==\n");
    printf("    =|------------------------|=\n");
    int nilai[10]={86,75,98,66,56,76,80,95,70,60};
    int index, *ip;
   printf("Mencetak menggunakan array\n");
    printf("Daftar nilai siswa\n\n");
   for(index=0; index<10; index++)
        printf("%3d",nilai[index]);

   puts("\n");
   printf("Mencetak menggunakan pointer dan index\n");
   printf("Daftar nilai siswa\n\n");

   for(index=0; index<10; index++)
        printf("%3d",*(nilai+index));

   puts("\n");
   printf("Mencetak menggunakan pointer\n");
   printf("Daftar nilai siswa\n\n");
   ip=nilai;

   for(index=0; index<10; index++)
        printf("%3d",*ip++); }
