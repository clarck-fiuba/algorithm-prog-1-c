#include <stdio.h>

/**
  Algoritmo DIVISION
      leer dividendo
      leer divisor

      cociente <- 0
      resto <- 0

      mientras ( cociente + divisor ) < dividendo  hacer
        cociente <- cociente + divisor
      fin mientras

      resto <- cociente - dividendo

      mientras  resto < divisor  hacer
        resto <- MULTIPLICATION(resto, 10)
      fin mientras


  fin DIVISION
 */



int main() {
    printf("======== ALGORITMO DIVISION =======\n");

    int cociente = 0;
    float dividendo = 0;
    float divisor = 0;
    float resto = 0;
    int resultado = 0;
    int decimal = 0;
    int signo = 1;

    printf("Ingresá un numero a dividir: \n");
    scanf("%f", &dividendo);
    printf("Ingresá un divisor: \n");
    scanf("%f", &divisor);

    if ((dividendo < 0 || divisor < 0)) signo = -1;
    if ((dividendo < 0 && divisor < 0)) signo = 1;
    if (dividendo < 0) dividendo *= -1;
    if (divisor < 0) divisor *= -1;

    while (((float) resultado + divisor) <= dividendo) {
        resultado = resultado + divisor;
        cociente++;
    }

//    printf("cociente %d\n", cociente);
    resto = dividendo - (float) resultado;
    resultado = cociente;

    if (resto > 0) {
//        printf("resto %.2f\n", resto);
        float n_dividendo = 0;
        do {
            for (int i = 0; i < resto; ++i)
                n_dividendo = n_dividendo + 10;
        } while (n_dividendo < divisor);

        cociente = 0;
        while ((float) decimal + divisor <= n_dividendo) {
            decimal = decimal + divisor;
            cociente++;
        }
//        printf("nuevo cociente %d\n", cociente);
        decimal = cociente;
    }

    resultado *= signo;
    printf("%.1f dividido por %.1f = %d.%d", dividendo, divisor, resultado, decimal);
    return 0;
}
