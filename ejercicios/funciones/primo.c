/**
 * @file primo.c
 * @author Clarck M. (cmonclair@fi.uba.ar)
 * @brief
 * @version 0.1
 * @date 2022-05-08
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * Escribir una función que reciba un número y devuelva un valor booleano
indicando si el número recibido es ó no primo. Si desconoce como devolver un
valor booleano, puede devolver 0, en caso de No ser primo; y 1, si lo es
*/

#include <stdio.h>
#include <stdlib.h>

int primo(int n)
{
    int es_primo = 1, i = 2;
    for ( i = 2; i < n; i++)
    {
        if( n % i == 0)
            es_primo = 0;
    }
    return es_primo;
}

int main()
{
    int numero = 19;
    if (primo(numero) == 1)
        printf("%d es primo\n", numero);
    else
        printf("%d no es primo\n", numero);
    return 0;
}