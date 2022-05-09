/**
 * @file sucecion_geometrica.c
 * @author Clarck M. (cmonclair@fi.uba.ar)
 * @brief
 * @version 0.1
 * @date 2022-05-08
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 Dado un número n, informar los n primeros términos de la sucesión
 geométrica de razón 3 (1, 3, 9, 27, etc.).
 */

#include <stdio.h>
#include <stdlib.h>

int sn(int n, int razon);

int main()
{
    int n = 5;
    int r = 3;
    printf("La suma de los %d terminos de un Sn de razon %d es %d\n\n", n, r, sn(n, r));
    return 0;
}

int sn(int n, int razon)
{
    int suma = 0;
    int a = 1, r = razon, i;
    for (i = 0; i < n; i++)
    {
        if (i == 0)
            suma = a;
        else
            suma = suma + (a * r);
        if (i >= 1)
            r = r * r;
    }
    return suma;
}