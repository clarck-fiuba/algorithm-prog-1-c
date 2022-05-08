/*
Escribir una función en C que reciba como parámetro un numero entero y 
devuelva al modulo invocante los siguientes valores:
- el resultado de multiplicar sus digitos impares y
- la cantidad de digitos que cumplieron la condicion y fueron procesados. 

Por ejemplo: 
-> el número con el que se invoca la funcion es 25831 
-> los digitos impares son 5, 3 y 1
-> La funcion debe devolver: Producto = 15 Digitos Procesados = 3

Escribir un programa que invoque dicha funcion y la pruebe con los siguientes
valores:

25831 	=> Producto = 15 Digitos Procesados 3
333	        => Producto = 27 Digitos Procesados 3
1357	=> Producto = 105 Digitos Procesados 4
2468	=> Producto = 0 Digitos Procesados 0
8230	=> Producto = 3 Digitos Procesados 1

Nota: para la resolucion de este ejercicio no se pueden utilizar arreglos.
*/

#include <stdio.h>

int productoDeImpares(int numero, int * digitos) {
	int resto = numero;
	int aux;
	int producto = 1;
	*digitos = 0;
	while(resto > 0) {
		aux = resto % 10;
		if(aux % 2 != 0) {
			producto *= aux;
			(*digitos)++;
		}
		resto = resto / 10;
	}
	if(*digitos == 0){
		producto = 0;
	}
	return producto;
}

void main(){
	int producto, digitos;
	producto = productoDeImpares(25831, &digitos);
	printf("Producto = %i Digitos Procesados %i\n", producto, digitos);
	producto = productoDeImpares(333, &digitos);
	printf("Producto = %i Digitos Procesados %i\n", producto, digitos);
	producto = productoDeImpares(1357, &digitos);
	printf("Producto = %i Digitos Procesados %i\n", producto, digitos);
	producto = productoDeImpares(2468, &digitos);
	printf("Producto = %i Digitos Procesados %i\n", producto, digitos);
	producto = productoDeImpares(8230, &digitos);
	printf("Producto = %i Digitos Procesados %i\n", producto, digitos);
	getchar();
}
