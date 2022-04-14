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

int main() {
    printf("======= PROGRAMA DETECTOR DE NUMERO CAPICUA ( PALINDROM ) ========\n\n");
    int entrada = 0;
    int ultima_cifra = 0;
    int nuevo_numero = 0;
    int temp = 0;
    printf("Ingresá un numero: ");
    scanf("%d", &entrada);
    printf("\n");
    temp = entrada;
    while (entrada != 0) {
        ultima_cifra = entrada % 10;
        entrada = entrada / 10;
        nuevo_numero = (nuevo_numero * 10) + ultima_cifra;
        printf("Armando el nuevo numero : %d\n", nuevo_numero);
    }
    if (temp == nuevo_numero)
        printf("%d es capicua ", temp);
    else
        printf("%d no es capicua", temp);
    return 0;
}
