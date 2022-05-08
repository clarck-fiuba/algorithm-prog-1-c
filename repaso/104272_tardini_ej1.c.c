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

int main()
{
	int producto, dig_No_Procesados;
	
	producto=(sumar_Numeros_Pares(28531,&dig_No_Procesados));
	printf("La suma de sus digitos pares es: %d y los digitos No Procesados: %d \n",producto,dig_No_Procesados);
	producto=(sumar_Numeros_Pares(444,&dig_No_Procesados));
	printf("La suma de sus digitos pares es: %d y los digitos No Procesados: %d \n",producto,dig_No_Procesados);
	producto=(sumar_Numeros_Pares(1357,&dig_No_Procesados));
	printf("La suma de sus digitos pares es: %d y los digitos No Procesados: %d \n",producto,dig_No_Procesados);
	producto=(sumar_Numeros_Pares(2468,&dig_No_Procesados));
	printf("La suma de sus digitos pares es: %d y los digitos No Procesados: %d \n",producto,dig_No_Procesados);
	producto=(sumar_Numeros_Pares(8230,&dig_No_Procesados));
	printf("La suma de sus digitos pares es: %d y los digitos No Procesados: %d \n",producto,dig_No_Procesados);
	    
    return 0;
}

int sumar_Numeros_Pares(int Numero, int *dig_No_Procesados){
    int Suma = 1;
    *dig_No_Procesados = 0;
    
    while((Numero%10) > 0){
        if(Numero%2 == 0){
            Suma = Suma * (Numero%10);
        }else{
            (*dig_No_Procesados)++;
        }
        Numero = Numero / 10;
}
    return Suma;
}
