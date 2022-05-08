/*Escribir un programa que solicite el ingreso de dos n�meros, y luego informe los
n�meros primos que hay entre esos dos n�meros.
Se debe validar que los n�meros ingresados sean enteros y adem�s que el primer
n�mero sea menor o igual que el segundo.*/

#include <stdio.h>

int funcion_recorrer(int numero_menor, int numero_mayor, int *digitos_no_procesados)
{

	int cont = 0, i;
	*digitos_no_procesados = 0;

	for (i = numero_menor; i <= numero_mayor; i++)
	{
		if (i % 2 != 0)
		{
			cont++;
		}
		else
			(*digitos_no_procesados)++;
	}
	return (cont);
}

void ingreso_de_num(int *num1, int *num2)
{

	printf("Ingrese un numero:");

	scanf("%i", num1);

	printf("Ingrese otro numero:");

	scanf("%i", num2);

	return;
}

int funcion_verificar(int numero_menor, int numero_mayor)
{

	int producto, digitos_no_procesados;

	if (numero_menor <= numero_mayor)
	{

		producto = funcion_recorrer(numero_menor, numero_mayor, &digitos_no_procesados);

		printf("los impares que hay en el intervalo (%d,%d) es: %d la cantidad de pares es: %d", numero_menor, numero_mayor, producto, digitos_no_procesados);
	}
	else
		printf("Numero Invalido\n");
}

int main()
{

	int numero_menor, numero_mayor, producto, digitos_no_procesados;

	ingreso_de_num(&numero_menor, &numero_mayor);

	funcion_verificar(numero_menor, numero_mayor);

	return 0;
}
