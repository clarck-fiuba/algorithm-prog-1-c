/*
    Indica is un numero es capicua (palindrom)
    11811
    151

    Estrategia:
    - Armar un nuevo numero a partir del primero
    - Este numero deberia ser el primer invertido
    - Luego comparar el nuevo numero con el primero
    - Si son iguales entonces el primero es capicua

    nuevo_numero = (nuevo_numero * 10) + ultima_cifra;
    // nuevo -> (0 * 10) + 1  = 1
    // nuevo -> (1 * 10) + 5  = 15
    // nuevo -> (15 * 10) + 1  = 151
*/

#include <stdio.h>
#include <stdbool.h>


void sucecion_geometrica(int numero){
	
	int i, suce_geo=1;
	
	for (i=0; i<=numero; i++){
		printf("%d\n", suce_geo);
		suce_geo=suce_geo*3;
	}
	
}


void mi_funcion(int num, int *canti, int* producto){
    int entrada = num;
    int ultim = 0;
    
    while(entrada != 0){
        ultim = entrada % 10;
        entrada = entrada / 10;
        if (ultim % 2 == 0){
            (* producto) *= ultim;
            (* canti)++;
        }
    }


}

bool es_capicua(int entrada){
    int temp = 0;
    int es = 0;
    int ultima_cifra = 0;
    int nuevo_numero = 0;
    temp = entrada;
    
    while (entrada != 0) {
        ultima_cifra = entrada % 10;
        entrada = entrada / 10;
        nuevo_numero = (nuevo_numero * 10) + ultima_cifra;
    }
    return (temp == nuevo_numero);
}

int pedir_numero(int *entrada){
    printf("Ingresá un numero: ");
    printf("\n");
    return scanf("%d", entrada);
}

void mostrar(bool cond){
    if (cond)
        printf("es capicua \n");
    else
        printf("no es capicua \n");
}

int main()
{
    // int entrada;
    // int continuar = 0;
    // int canti = 0;
    // int producto = 1;

    // while (entrada != 0){
    //     pedir_numero(&entrada);
    //     // mostrar(es_capicua(entrada));
    //     mi_funcion(entrada, &canti, &producto);
    // };

    // pedir_numero(&entrada);
    // mi_funcion(entrada, &canti, &producto);
    // printf("%d\n", producto);
    // printf("%d\n", canti);
    int i;
    for (i = 0; i < 10; i++)
    {
       printf("%d\n",i);
    }
    
    printf("i: %d\n", i);
    
    return 0;
}

