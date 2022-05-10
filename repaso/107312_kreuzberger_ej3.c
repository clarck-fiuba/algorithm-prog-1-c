/* ENUNCIADO EJERCICIO 3
Implementar la funcion ejercicio_3 que reciba una matriz cargada con numeros
enteros entre 0 y 100, y el maxmo logico de filas y el de columnas de esta.

La funcion debe mostrar pantalla los numeros que NO estan almacenados en la
estructura.

Considerar que solo se puede recorrer una vez la matriz. Esta permitida la
utilizacion de un vector auxiliar.

Por ejemplo:

  se tiene la siguiente matriz de 3x3 -> {{56, 89, 56}, {78, 23, 11}, {75, 56, 11}}

El resultado debe ser:
0 1 2 3 4 5 6 7 8 9 10 12 13 14 15 16 17 18 19 20 21 22 24 25 26 27 28 29 30 31
32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 57 58
59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 76 77 79 80 81 82 83 84 85 86
87 88 90 91 92 93 94 95 96 97 98 99 100

NOMBRA TU ARCHIVO DE LA SIGUIENTE FORMA: padrón_apellido_ej3.c
reemplazando padrón por tu padrón y apellido, por tu apellido.
*/

#include <stdio.h>
typedef int matrix_t[25][25];
void ejercicio_3(matrix_t matrix, int mf, int mc) {

    /* INICIO: INGRESE SU CODIGO ACA */
	int i, j, k, aux;
	int vector_aux[625];
	k = 0;
	for(i = 0; i < mf; i++) {
		for(j = 0; j < mc; j++) {
			vector_aux[k] = matrix[i][j];
			k++;
		}
	}
	for(i = 1; i < k; i++){
		aux = vector_aux[i];
		j = i - 1;
		while((j >= 0) && (aux < vector_aux[i])){
			vector_aux[j + 1] = vector_aux[i];
			i--;
		}
		vector_aux[j + 1] = aux;
	}
	j = 0;
	for(i = 0; i <= 100; i++) {
		if(i != vector_aux[j])
		printf("%i ", i);
		j++;
	}
	printf("\n");
    /* FIN: INGRESE SU CODIGO ACA */

}
int main(){

matrix_t matriz1 = {{8,5,2},{7,4,1}};
matrix_t matriz2 = {{94,16,3,48,12},{15,66,20,92,93},{34,87,14,78,41},{2,67,15,66,64},{36,76,2,97,20},{81,48,91,20,56},{20,44,84,16,51},{69,43,78,30,11},{53,75,51,97,32},{89,24,89,87,56}};
matrix_t matriz3 = {{15,37,19,33,27,30},{0,24,19,39,24,27},{49,28,30,11,37,43},{30,23,36,21,2,14},{16,6,15,36,20,2},{0,11,6,19,39,40},{9,2,44,44,6,15},{5,31,20,16,17,7},{10,32,40,15,3,10},{29,4,46,28,22,31},{5,18,24,25,9,19},{19,13,5,50,14,18},{36,13,34,7,28,45},{2,4,17,39,30,19},{7,1,43,3,41,23},{29,34,6,35,6,1},{25,20,20,42,17,43},{36,46,31,24,29,3},{9,43,24,31,37,39},{44,48,9,13,40,6}};

    printf("CASO 1 -------------------------\n\n");
    ejercicio_3(matriz1, 2, 3);
   
    printf("CASO 2 -------------------------\n\n");
    ejercicio_3(matriz2, 10, 5);

    printf("CASO 3 -------------------------\n\n");
    ejercicio_3(matriz3, 20, 6);
	return 0;
}
