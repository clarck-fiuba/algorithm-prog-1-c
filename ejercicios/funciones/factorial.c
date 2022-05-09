/**
 * @file factorial.c
 * @author Clarck M. (cmonclair@fi.uba.ar)
 * @brief 
 * @version 0.1
 * @date 2022-05-07
 * 
 * @copyright Copyright (c) 2022
 * 
 * Escribir una función que reciba un valor y calcule el factorial del mismo. Si no se
   puede calcular el factorial del valor recibido, la función deberá devolver 0, de lo
   contrario deberá devolver el valor calculado
 */

#include <stdio.h>
#include <stdlib.h>

int factorial(int num){
  int fact=1,i;
  
  if (num<1) return 0;

  for (i = 1; i <= num; i++)
  {
    fact = fact * i;
  }
  
  return fact;
}

int main(){
    int num = -5;
    printf("factorial de %d es %d\n",num, factorial(num));
    return 0;
}