/* ENUNCIADO EJERCICIO 2

Implementar la funcion ejercicio_2 que reciba una vector de caracteres (maximo 1000) que equivale a un texto terminado en '.'
La funcion debe devolver la cantidad de vocales que se encuentran en el texto.
Considerar que solo se puede recorrer una vez el vector y las letras son solo mayusculas.

Por ejemplo:

  HOLA, EJERCICIO 2.

  El resultado debe ser: 7

*/

int ejercicio_2(char vec[]){
	//Esta función devuelve la cantidad de vocales encontrados en el vector vec
	int i = 0;
	int vocales = 0;

	while(vec[i] != '.' && i < 1000){
		//El ciclo se ejecutará hasta encontrar un punto o llegar a pos. 1000
		// (en el caso de que el vector no tenga punto).
		if(vec[i] == 'A' || vec[i] == 'E' || vec[i] == 'I' || vec[i] == 'O' || vec[i] == 'U')
			vocales++;
		i++;
	}
	return vocales;
}

