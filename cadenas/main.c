#include <stdio.h>
#include <stdbool.h>
#include <string.h>


#define MF 30

typedef char t_cadena[MF];
 

int cant_palabras(t_cadena s){
    int i,words=0,sp=1;
    for(i=0;i<strlen(s);i++)  
    {
        if(s[i]==32){
            if (sp < 1)
                words++;
            sp++;
        }else
            sp=0;
    }
    if (i > 0 && sp < 1)
        words++;
    return words;
}

int main(){
    int np;

    np = cant_palabras("El sol es amarillo.");
    // np = cant_palabras(" El       sol  es amarillo.  ");
    // np = cant_palabras("El  sol                   es     verdaderamente amarillo. ");

    printf("Esta oracion tiene %d palabras", np);

    return 0;
}