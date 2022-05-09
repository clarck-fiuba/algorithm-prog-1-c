#include <stdio.h>
#include <stdlib.h>
#define MAX 7

int esPrimo(int num);
void mi_funcion(int num, int *canti, int* producto);

void func_test(int A){
    printf("valor de A: %d\n", A);
    A=111;
    printf("valor de A: %d\n", A);
}

int main(){
    int num = 77;
    func_test(num);

    printf("valor de A: %d\n", num);
    // if(esPrimo(num)==1)
    //     printf("es un numero primo");
    // else
    //     printf("no es un numero primo");
    return 0;
}

int esPrimo(int num){
    int es = 1, n=2;
    for ( n = 2; n < num; n++)
    {
        if (num % n == 0)
            es = 0;
    }
    return es;
}


void mi_funcion(int num, int *canti, int* producto){
    int entrada = num;
    int ultim = 0;
    
    while(entrada != 0){
        ultim = entrada % 10;
        entrada = entrada / 10;
        if (ultim % 2 == 0){
            (* producto) *= ultim;
            (* canti)++;
        }
    }


}