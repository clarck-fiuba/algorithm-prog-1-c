#include <stdio.h>
#include <stdlib.h>
#define MAX 7

int esPrimo(int num);
int main(){
    int num = 77;
    if(esPrimo(num)==1)
        printf("es un numero primo");
    else
        printf("no es un numero primo");
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