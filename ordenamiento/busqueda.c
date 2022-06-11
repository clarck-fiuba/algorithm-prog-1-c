#include<stdio.h>
#include<stdlib.h>


#include <stdbool.h>    //typedef enum {false, true} bool;

#define max 20 //defino una constante

int BusqSec(int valores[], int tamanio, int busca)
{
int i=0, posicion=-1;
bool encontrado; 

while ( i < tamanio && !encontrado)
{
   if (valores[i]==busca)
   {
       encontrado = true;
       posicion=i;
   }
   i++; 
}

return posicion;
}


int BusqBinaria(int valores[], int tamanio, int buscado)
{
int inf, sup, mit;
bool terminado; 
int posicion=-1;
    
inf=0;
sup=tamanio-1;

terminado = false;

// while (terminado == false)
while (!terminado)
{
    if ((buscado > valores[sup])|| (buscado < valores[inf]))
    {
        terminado = true; // NO ESTA => FIN DE LA BUSQUEDA
        posicion = -1;
    }
    else
    {
        mit=(inf+sup)/2;
        if (buscado == valores[mit])
        {
           terminado = true; // ENCONTRADO => FIN DE LA BUSQUEDA
           posicion = mit;
        }                 
        else
           if(buscado > valores[mit])
              inf= mit + 1;
           else
              sup= mit - 1;
    }        
}

return posicion;
}


int main()
{
//int vector[max]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19}; //VALORES COINCIDEN CON POSICION
int vector[max] = {0,10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160,170,180,190}; //VALORES COINCIDEN CON POSICION


int dato,n=max;

int pos; 

printf("Ingrese dato a buscar, devolver -1 si no lo encuentra\n\n");
scanf("%d",&dato);

/* SECUENCIAL */
pos = BusqSec(vector,20,dato);
printf("\n Valor %d buscado x BUSQUEDA SECUENCIAL esta en posicion %d  \n",dato,pos);

/* BINARIA */
pos = BusqBinaria(vector,20,dato);
printf("\n Valor %d buscado x BUSQUEDA BINARIA esta en posicion %d  \n\n",dato,pos);


// system("PAUSE");
return 0;
}