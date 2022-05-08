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


int suma_dig_pares(int num, int *impares, int *pares){
	//Esta funcion devuelve la suma de los digitos pares de num,
	//y la cantidad de digitos pares e impares por referencia.
	int digito = 0;
	int total = 0;
	
	*pares = 0;                         //borro el valor anterior de pares
    *impares = 0;                       //borro el valor anterior de impares

	while(num > 0){
		digito = num % 10;              //extraigo el Ultimo digito de num
		num /= 10;                      //quito el ultimo digito de num
		if(digito % 2 == 0){            //Si el digito es par, sumo.
			total=total+digito;
			(*pares)++;
		}                                  
        else{
        	(*impares)++;              //Sino agrego 1 al contador de impares
		}                              	

}
 
	return total;

}

int main(){
	int numImpares = 0, numPares =0, resultado; 

	resultado = suma_dig_pares(25831, &numImpares, &numPares);
	printf("Suma = %d Digitos No Procesados = %d Digitos Procesados = %d\n\n", resultado, numImpares, numPares);

	resultado = suma_dig_pares(444, &numImpares, &numPares);
	printf("Suma = %d Digitos No Procesados = %d Digitos Procesados = %d\n\n", resultado, numImpares, numPares);

	resultado = suma_dig_pares(1357, &numImpares, &numPares);
	printf("Suma = %d Digitos No Procesados = %d Digitos Procesados = %d\n\n", resultado, numImpares, numPares);

	resultado = suma_dig_pares(2468,&numImpares, &numPares);
	printf("Suma = %d Digitos No Procesados = %d Digitos Procesados = %d\n\n", resultado, numImpares, numPares);

	resultado = suma_dig_pares(8230, &numImpares, &numPares);
	printf("Suma = %d Digitos No Procesados = %d Digitos Procesados = %d\n\n", resultado, numImpares, numPares);
	
	return 0;
}
