/**
 * @file func1.c
 * @author Clarck M. (cmonclair@fi.uba.ar)
 * @brief 
 * @version 0.1
 * @date 2022-05-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

void mifunc(int num, int *mayor, int *repeticiones)
{
    int temp = num;
    int digito = 0;
    *mayor = 0;
    *repeticiones = 0;
    while (temp > 0)
    {
        digito = temp % 10;
        temp = temp / 10;
        if (digito >= *mayor)
        {
            if (digito == *mayor)
                (*repeticiones)++;
            else
            {
                *mayor = digito;
                *repeticiones = 1;
            }
        }
    }
}

int main()
{
    int numero = 58381;
    int mayor, repeticiones;
    mifunc(numero, &mayor, &repeticiones);
    printf("%d se repite %d veces\n", mayor, repeticiones);
    return 0;
}