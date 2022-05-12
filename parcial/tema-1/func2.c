/**
 * @file func2.c
 * @author Clarck M. (cmonclair@fi.uba.ar)
 * @brief 
 * 
 * Lo unico que puedo hacer para saber que el numero no esta evaluado 2 veces es comprobar que ya lo evuale
 * guardar este numero en un lugar un vector aux seria una buena opcion;
 * pero: No se sabe el dominio de los elementos de la columnas xejemplo 0-10 o 0-100
 * como armo el vector auxiliar?
 * 
 * @version 0.1
 * @date 2022-05-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#define cantfilas 3
#define cantcols 2
typedef int Tmatriz[cantfilas][cantcols];
typedef int Taux[11];

void mifunc(int num, Tmatriz matrix, int *veces, int *mayores)
{
    int i, j, el = 0;
    *veces = 0;
    *mayores = 0;

    for (i = 0; i < cantfilas; i++)
    {
        for (j = 0; j < cantcols; j++)
        {
            el = matrix[i][j];
            if (el > num)
                (*mayores)++;
            if(el == num)
                (*veces)++;
        }
    }
}

int main()
{
    int veces, mayores, numero = 5;
    Tmatriz matrix = {{8, 2}, {6, 5}, {5, 7}};
    // Tmatriz matrix = {{8, 9}, {8, 3}, {5, 7}};
    mifunc(numero, matrix, &veces, &mayores);
    printf("hay %d numeros mayor a %d y se repite %d veces en la matrix\n", mayores, numero, veces);
    return 0;
}