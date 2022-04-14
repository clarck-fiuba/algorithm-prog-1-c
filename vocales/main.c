/*
    Programa Texto Vocales y Consonantes
    Ingresar un texto que termina con .(punto), e inditexto cantidad de vocales y consonantes.
*/

#include <stdio.h>

int main() {
    char texto;
    int vocal = 0;
    int cons = 0;

    printf("Ingresá un texto que termina con '.' :");
    scanf("%c", &texto);

    while (texto != '.') {
        if ((texto == 'a' ||
             texto == 'e' ||
             texto == 'i' ||
             texto == 'o' ||
             texto == 'u') ||
            (texto == 'A' ||
             texto == 'E' ||
             texto == 'I' ||
             texto == 'O' ||
             texto == 'U')) {
            vocal++;
            printf("Tengo un vocal\n");
        } else {
            cons++;
            printf("Tengo un consonante\n");
        }

        scanf("%c", &texto);
    }

    printf("La cantidad de vocales es: %d\n", vocal);
    printf("La cantidad de consonantes es: %d", cons);

    return 0;
}