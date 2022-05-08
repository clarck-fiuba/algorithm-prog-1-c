#include <stdio.h>
#include <stdlib.h>
#define Max 100

typedef int vector[Max];

int maximo_logico(int numero[])
{
    int i = 0;
    int entrada;
    while (entrada != -1)
    {
        printf("ingrese un numero y -1 para terminar\n");
        scanf("%d", &entrada);
        numero[i] = entrada;
        i++;
    }
    return i - 1;
}
void mostrar_datos(int numero[], int max)
{
    int i = 0;
    for (i = 0; i < max; i++)
        printf("posicion %i --> elementos guardados: %d\n", i, numero[i]);
}

int mayor(int numero[], int max, int *repeticion, int posiciones[])
{
    int i, j = 0, mayor = 0, posicion = 0;
    for (i = 0; i < max; i++)
    {
        if (numero[i] > mayor)
        {
            mayor = numero[i];
            posicion = i;
            *repeticion = 0;
            j = 0;
        }
        if (mayor == numero[i])
        {
            posiciones[j] = i;
            *repeticion = *repeticion + 1;
            j++;
        }
    }
    return posicion;
}

int main()
{
    vector numero;
    vector posiciones;
    int max, Mayor, repeticion;
    max = maximo_logico(numero);
    mostrar_datos(numero, max);
    Mayor = mayor(numero, max, &repeticion, posiciones);
    printf("la posicion mayor es:%d y el mayor es: %d, y se repite:%d veces\n", Mayor, numero[Mayor], repeticion);
    mostrar_datos(posiciones,repeticion);
    return 0;
}