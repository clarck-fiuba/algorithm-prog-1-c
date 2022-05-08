/* ENUNCIADO EJERCICIO 2

Implementar la funcion ejercicio_2 que reciba un vector de caracteres (maximo 1000) que equivale a un texto terminado en '.'
La funcion debe devolver la cantidad de consonantes que se encuentran en el texto.
Considerar que solo se puede recorrer una vez el vector y las letras son solo mayusculas.

Por ejemplo:

  HOLA, EJERCICIO 2.

  El resultado debe ser: 6

*/

#  include <stdio.h>



int ejercicio_2(char V[],int T){
	
	int i=0,cons=0,vocal=0;
	
	while(V[i]!='.'){
		if (V[i]!='A' && V[i]!='E' && V[i]!='I' && V[i]!='O' && V[i]!='U' &&
        V[i]>='A' && V[i]<='Z')
        cons++;i++;
}

return(cons);

}

int main (){
	char v_caracter[1000]="HOLA, EJERCICIO 1.";
///	printf("Cantidad de consonantes mayusculas encontradas: %d ",ejercicio_2(v_caracter,1000));
	
	printf("cantidad de Consonantes:%i",ejercicio_2(v_caracter,1000));
	
	return 0;
}
