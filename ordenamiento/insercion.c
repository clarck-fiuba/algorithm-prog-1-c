#include <stdio.h>
#include <stdlib.h>

int vec[] = {4, 3, 5, 2, 1};
// int vec[]={1,2,5,12,11};

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
   int k, i, aux;

   for (k = 1; k < n; k++)
   {
      aux = vector[k];
      printf("\n elemento a insertar k= %d Valor= %d  \n", k, aux);

      i = k - 1;
      while ((i >= 0) && (aux < vector[i]))
      {                             // mientras no haya llegado al final
                                    // y aux este fuera de lugar
         vector[i + 1] = vector[i]; // desplazo v[i]
         i = i - 1;                 // desplazo indice

         mostrar(vector, 5);
         printf("   DESPLAZAMIENTO\n");
      }
      vector[i + 1] = aux; // coloco aux en su lugar

      mostrar(vector, 5);
      printf("   INSERTO\n");
   }
}

void ordenar_con_msj(int vector[], int n)
{
   int k, i, aux;

   for (k = 1; k < n; k++)
   {
      aux = vector[k];
      printf("\n elemento a insertar k= %d Valor= %d  \n", k, aux);

      i = k - 1;
      while ((i >= 0) && (aux < vector[i]))
      {                             // mientras no haya llegado al final
                                    // y aux este fuera de lugar
         vector[i + 1] = vector[i]; // desplazo v[i]
         i = i - 1;                 // desplazo indice

         mostrar(vector, 5);
         printf("   DESPLAZAMIENTO\n");
      }
      vector[i + 1] = aux; // coloco aux en su lugar

      mostrar(vector, 5);
      printf("   INSERTO\n");
   }
}

int main()
{

   printf("VECTOR ORIGINAL\n");
   mostrar(vec, 5);
   printf("\n\n");

   printf("METODO DE INSERCION\n\n");

   ordenar_con_msj(vec, 5);
   // ordenar(vec,5);

   printf("\nVECTOR FINAL\n");
   mostrar(vec, 5);
   printf("\n");

   system("PAUSE");
}