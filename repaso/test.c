#include <stdio.h>
#include <stdlib.h>
#define MAX 7
typedef int vector[10];

int esPrimo(int num);
void mi_funcion(int num, int *canti, int *producto);

void func_test(int A)
{
    printf("valor de A: %d\n", A);
    A = 111;
    printf("valor de A: %d\n", A);
}

void ingreso(int vect[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("Ingresa un numero:");
        scanf("%d", &vect[i]);
    }
}

int promedio(vector vect)
{
    int i, suma = 0;
    int prom;
    for (i = 0; i < 10; i++)
    {
        suma = suma + vect[i];
    }
    prom = suma / 10;
    return prom;
}

int main()
{
    int num = 77;
    int prom;
    vector vect = {0};
    ingreso(vect);
    prom = promedio(vect);
    for (int i = 0; i < 10; i++)
    {
        if (vect[i] > prom)
            printf("%d es mayor al promedio %d\n", vect[i], prom);
    }

    // if(esPrimo(num)==1)
    //     printf("es un numero primo");
    // else
    //     printf("no es un numero primo");
    return 0;
}

int esPrimo(int num)
{
    int es = 1, n = 2;
    for (n = 2; n < num; n++)
    {
        if (num % n == 0)
            es = 0;
    }
    return es;
}

void mi_funcion(int num, int *canti, int *producto)
{
    int entrada = num;
    int ultim = 0;

    while (entrada != 0)
    {
        ultim = entrada % 10;
        entrada = entrada / 10;
        if (ultim % 2 == 0)
        {
            (*producto) *= ultim;
            (*canti)++;
        }
    }
}