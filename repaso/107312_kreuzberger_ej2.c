/* ENUNCIADO EJERCICIO 2

Implementar la funcion ejercicio_2 que reciba un vector de caracteres
(maximo 1000) que equivale a un texto terminado en '.'
La funcion debe devolver la cantidad de consonantes que se encuentran en el
texto.
Considerar que solo se puede recorrer una vez el vector y las letras son solo
mayusculas.

Por ejemplo:

  HOLA, EJERCICIO 2.

  El resultado debe ser: 6
*/

int ejercicio_2(char texto[1000]) {
	int i, consonantes;
	i = consonantes = 0;
	while(texto[i] != '.') {
		if(((texto[i] >= 'A') && (texto[i] <= 'Z')) && ((texto[i] != 'A') &&
		(texto[i] != 'E') && (texto[i] != 'I') && (texto[i] != 'O') &&
		(texto[i] != 'U')) ) {
			consonantes++;
		}
		i++;
	}
	return consonantes;
}
