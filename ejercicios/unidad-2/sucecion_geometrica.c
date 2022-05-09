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
 * @brief
 Dado un número n, informar los n primeros términos de la sucesión
 geométrica de razón 3 (1, 3, 9, 27, etc.).
 */

#include <stdio.h>
#include <stdlib.h>


void displaySnR3(int numero);

int main()
{
    int n = 4; 
    displaySnR3(n);
    return 0;
}


void displaySnR3(int numero){
	
	int i, suce_geo=1, suma=0;

    printf("{");
	for (i=0; i<numero; i++){
		printf(" %d,", suce_geo);
        suma = suma + suce_geo;
		suce_geo=suce_geo * 3;
	}
    printf(" }\n");
    printf("La sum es: %d\n\n",suma);
}