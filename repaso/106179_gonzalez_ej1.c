/* 
Escribir una función en C que reciba como parámetro un numero entero y devuelva al modulo invocante los siguientes valores:
- el resultado de sumar sus digitos pares y
- la cantidad de digitos que NO cumplieron la condicion y en consecuencia no fueron procesados. 

Por ejemplo: 
-> el número con el que se invoca la funcion es 25831 
-> los digitos pares son 2 y 8 
-> La funcion debe devolver: Suma = 10 Digitos No Procesados = 3 (5, 3 y 1)

Escribir un programa que invoque dicha funcion y la pruebe con los siguientes valores:

25831 	=> Suma = 10 Digitos No Procesados 3
444	        => Suma = 12 Digitos No Procesados 0
1357	=> Suma = 0 Digitos No Procesados 4
2468	=> Suma = 20 Digitos No Procesados 0
8230	=> Suma = 10 Digitos No Procesados 1

Nota: para la resolucion de este ejercicio no se pueden utilizar arreglos.
*/

#include <stdio.h>

int suma_dig_pares(int num, int *impares){
	//Esta función devuelve la suma de los digitos pares de num,
	//y la cantidad de dígitos impares por referencia.
	int digito;
	int total = 0;

	*impares = 0; //borro el valor anterior de impares

	while(num > 0){
		digito = num % 10; //extraigo el último dígito de num
		num /= 10; //quito el último dígito de num
		if(digito % 2 == 0)			//Si el digito es par, sumo.
			total += digito;		//Sino agrego 1 al contador de impares
		else
			*impares = *impares + 1;       // tambien se puede poner (*impares)++;
	};
	return total;

}

void mostrar_resultado(int num, int suma, int impares){
	printf("Numero = %d\n", num);
	printf("Suma = %d Digitos No Procesados = %d\n\n", suma, impares);
}

int main(){
	int numImpares = 0;
	int resultado, numero;

	numero = 25831;
	resultado = suma_dig_pares(numero, &numImpares);
	mostrar_resultado(numero, resultado, numImpares);

	numero = 444;
	resultado = suma_dig_pares(numero, &numImpares);
	mostrar_resultado(numero, resultado, numImpares);

	numero = 1357;
	resultado = suma_dig_pares(numero, &numImpares);
	mostrar_resultado(numero, resultado, numImpares);

	numero = 2468;
	resultado = suma_dig_pares(numero, &numImpares);
	mostrar_resultado(numero, resultado, numImpares);

	numero = 8230;
	resultado = suma_dig_pares(numero, &numImpares);
	mostrar_resultado(numero, resultado, numImpares);

	return 0;
}
