/**
 * @file capicua.c
 * @author Clarck M. (cmonclair@fi.uba.ar)
 * @brief 
 * @version 0.1
 * @date 2022-05-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdbool.h>

/*
Indicar si un numero es capicua/palindromo
*/

void solicitar_numero(int *num) {
  printf("Ingrese un numero positivo para evaluar si es palindromo\n");
  scanf("%d", num);
}

bool es_capicua(int num) {
  int aux;
  int digito;
  int num_inv=0;

  aux = num;

  while (aux > 0) {
    digito = aux % 10;
    num_inv = (num_inv * 10) + digito;
    aux = aux / 10;
  }

  return num == num_inv;
}

void mostrar_reporte(bool resultado) {
  if (resultado)
    printf("Es palindromo");
  else 
    printf("No es palindromo");
}

int main(void)
{	
  int num;
  bool resultado;

  solicitar_numero(&num);
	 
  resultado = es_capicua(num);

  mostrar_reporte(resultado);

  return 0;
}