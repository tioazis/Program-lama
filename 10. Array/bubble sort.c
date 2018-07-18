#include <stdio.h>
#define MAKS 20

void pemasukan_data(float []);
void asc(float []);
void desc(float []);
void penampilan_data(float []);

int jml;

main()
{ float data[MAKS];

	pemasukan_data(data);
	asc(data);
	penampilan_data(data);
	desc(data);
	penampilan_data(data);
}

void pemasukan_data(float x[])
{
  int i;

  printf("Jumlah data = ");
  scanf("%d", &jml);

  for(i=0; i<jml; i++)
  {
    printf("Data ke-%d : ", i+1);
    scanf("%f", &x[i]);
  }
}


void asc(float x[]){
  int i, j;
  float temp;

  for(i=0; i<jml-1; i++)
    for(j=i+1; j<jml; j++)
      if(x[i] > x[j]){
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
      }
}

void desc(float x[])
{
  int i, j;
  float temp;

  for(i=0; i<jml-1; i++)
    for(j=i+1; j<jml; j++)
      if(x[i] < x[j])
        {
            temp = x[i];
            x[i] = x[j];
            x[j] = temp;
       }
}

    void penampilan_data(float x[]){
    int i;

    printf("\n urutan data :\n\n");
    for (i=0; i<jml; i++)
    printf("Data ke-%d : %g\n", i+1, x[i]);
}


