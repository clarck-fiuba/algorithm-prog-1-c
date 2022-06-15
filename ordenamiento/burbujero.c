#include <stdio.h>
#include <stdlib.h>

int vec[] = {4, 3, 5, 2, 1};
int i, j, aux, n = 5;

void mostrar(int vector[], int n)
{
  int k;
  for (k = 0; k < n; k++)
  {
    printf("%d ", vector[k]);
  }
}

void ordenar(int vector[], int n)
{
  int i, j;

  for (i = 1; i < n; i++)
  { // ciclo de n-1 iteraciones
    for (j = 0; j < n - i; j++)
    { // "burbujeo" del mayor valor
      if (vector[j] > vector[j + 1])
      { // si corresponde intercambio
        aux = vector[j];
        vector[j] = vector[j + 1];
        vector[j + 1] = aux;
      }
    }
  }
}

void ordenar_con_msj(int vector[], int n)
{
  int i, j;

  for (i = 1; i < n; i++)
  { // ciclo de n-1 iteraciones
    for (j = 0; j < n - i; j++)
    { // "burbujeo" del mayor valor
      if (vector[j] > vector[j + 1])
      { // si corresponde intercambio
        aux = vector[j];
        vector[j] = vector[j + 1];
        vector[j + 1] = aux;
      }
      mostrar(vector, 5);
      printf("   i= %d   j= %d   j+1= %d \n", i, j, j + 1);
    }
    printf("\n");
  }
}

int main()
{

  printf("VECTOR ORIGINAL\n");
  mostrar(vec, 5);
  printf("\n\n");

  printf("METODO DE BURBUJEO\n\n");

  ordenar_con_msj(vec, 5);
  // ordenar(vec,5);

  printf("\nVECTOR FINAL\n");
  mostrar(vec, 5);
  printf("\n");

  system("PAUSE");
}