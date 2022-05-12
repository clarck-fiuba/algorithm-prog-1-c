/**
 * @file max_comun_div.c
 * @author Clarck M. (cmonclair@fi.uba.ar)
 * @brief 
 * @version 0.1
 * @date 2022-05-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include <stdio.h>

int max_comun_div(int numA, int numB)
{
    int max_div = 0, resto;
    if (numB == 0)
        return max_div;
    while (max_div == 0)
    {
        resto = numA % numB;
        if (resto == 0)
            max_div = numB;
        numA = numB;  
        numB = resto;
    }
    return max_div;
}

int main()
{
    printf("mcd: %d\n", max_comun_div(200,180));
    return 0;
}