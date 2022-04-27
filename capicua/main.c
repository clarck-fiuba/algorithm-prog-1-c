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
    int entrada;
    int continuar = 0;
    do{
        pedir_numero(&entrada);
        continuar = entrada;
        mostrar(es_capicua(entrada));
            
    } while (continuar != 0);
    
    return 0;
}

