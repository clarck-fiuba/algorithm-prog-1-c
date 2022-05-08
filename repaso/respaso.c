/******************************************************************************


 *******************************************************************************/

#include <stdio.h>


#  include <stdio.h>

int funcion_vocales(char car, int *vocal, int *cons, int *numeros, int *espacios){

    *cons=0;
    *vocal=0;
    *numeros=0;
    *espacios=0;
    

while (car!='.') {

    if (car=='a' || car=='e' || car=='i' || car=='o' || car=='u')
            (*vocal)++;
            else 
			    if ((car>='a' && car<='z') && (car!=',' && car!=' '))
                    (*cons)++;
            else 
			    if (car=='1' || car=='2' || car=='3' || car=='4' || car=='5'|| 
				car=='6' || car=='7' || car=='8' || car=='9')
            (*numeros)++;
            else
                (*espacios)++;          
		   

scanf("%c",&car);
}

return;

}


int main(){
	
	char car,letras;
    int vocal, cons,espacios,numeros;
	
	printf("Ingrese un texto en minusculas terminado en '.' :");
    scanf("%c",&car);
    
	funcion_vocales(car, &vocal, &cons, &numeros, &espacios);
	
	
	printf("Cantidad de Vocales :%i, cantidad de Consonantes: %i, cantidad de espacios: %i, cantidad de Numeros: %i", vocal, cons, espacios, numeros);
    
}
