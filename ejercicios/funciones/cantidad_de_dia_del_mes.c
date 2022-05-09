/**
 * @file cantidad_de_dia_del_mes.c
 * @author Clarck M. (cmonclair@fi.uba.ar)
 * @brief 
 * @version 0.1
 * @date 2022-05-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/**
 * @brief 
 * mes de 30 dias: 4,6,9,11
 * mes de feb: 
 *  normal: 28
 *  bisiesto: 29
 */

#include <stdio.h>
#include <stdlib.h>


int main(){
    int cantidad=31;
    int mes=1, anio=1;
    printf("Ingresa un mes:\n");
    scanf("%d", &mes);
    if (mes<=12 && mes > 0){
        printf("Ingresa un año:\n");
        scanf("%d", &anio);
        if (mes == 2){
            cantidad = 28;
            if ((anio % 4 == 0))
                cantidad = 29;
        }else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
            cantidad = 30;
        }
        printf("Este me tiene %d dias", cantidad);
    }else{
        printf("Porfavor entra un mes valido");
    }
    return 0;
}