/*
    Indica is un numero es capicua (palindrom)
    11811
    151
*/

#include <stdio.h>

int main() {
    int entrada = 0;
    int resto = 0;
    int sum = 0;
    int temp = 0;
    printf("Ingresa un numero: ");
    scanf("%d", &entrada);
    temp = entrada;
    while (entrada > 0) {
        resto = entrada % 10;
        sum = (sum * 10) + resto;
        entrada = entrada / 10;
    }
    if (temp == sum)
        printf("%d es capicua ", entrada);
    else
        printf("%d no es capicua", entrada);
    return 0;
}
