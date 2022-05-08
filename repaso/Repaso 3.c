/* ----------- Ejercicio 1 ----------- */

//
// Implementar la funcion Ejercio_1, 
// la cual recibe por parametro el vector vec de largo d
//
// La misma debe sumar los valores pares almacenados en vec
// Por ejemplo: 
// si en vec se recibe el vector {51,1,20,4,5,6,7};
// el valor devuelto debe ser 30, dado que se suman 20 + 4 + 6
//

#include <stdio.h>


int Ejercio_1(int vec[], int d){

int i, sumpar = 1,sum_impar=1; 


while(vec[i] !=0){
	
	if (vec[i] % 2 == 0)
      sumpar = sumpar * vec[i];
    else
      sum_impar = sum_impar * vec[i];
    i++;
  }
	
if (sum_impar==1){
	sum_impar=0;
}

printf("El producto es: %i\n", sumpar);




return;

}

void main()
{

    const int largo = 7;
    
    //vectores de prueba
    int vector_1[] = {51,1,20,4,5,6,7};
    Ejercio_1(vector_1,largo);
    


/*
    // Verificacion con vector_1
    if ( Ejercio_1(vector_1,largo) == 15 )
       printf ("Correcto con vector_1\n\n");
    else
       printf ("Incorrecto con vector_1\n\n");
       
    // Verificacion con vector_2       
    if ( Ejercio_1(vector_2,largo) == 27 )
       printf ("Correcto con vector_2\n\n");
    else
       printf ("Incorrecto con vector_2\n\n");       
*/
}
