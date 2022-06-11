#include<stdio.h> 
#include<stdlib.h> 

int vec[]={4,3,5,2,1}; 
int i,j,aux,n=5; 

void mostrar(int vector[], int n)
{ 
  int k;     
  for(k=0;k<n;k++) 
  { 
    printf("%d ",vector[k]); 
  } 
}

void ordenar(int vector[], int n)
{
  int i,j;     
     
   for(i=0;i<n-1;i++){         //ciclo de n-1 iteraciones
      for(j=i+1;j<n;j++){           // comparo con los restantes
         if(vector[i]>vector[j]){          //si corresponde intercambio   
            aux=vector[i];                  
            vector[i]=vector[j]; 
            vector[j]=aux; 
          } 
       }
    }
} 


void ordenar_con_msj(int vector[], int n)
{
  int i,j;     
     
   for(i=0;i<n-1;i++){         //ciclo de n-1 iteraciones
      for(j=i+1;j<n;j++){           // comparo con los restantes
         if(vector[i]>vector[j]){          //si corresponde intercambio   
            aux=vector[i];                  
            vector[i]=vector[j]; 
            vector[j]=aux; 
          } 
     mostrar(vector,5); 
     printf("   i= %d   j= %d  \n",i,j); 
     }
   printf("\n"); 
   }
}



int main(){ 

printf("VECTOR ORIGINAL\n"); 
mostrar(vec,5);
printf("\n\n");

printf("METODO DE SELECCION\n\n");

ordenar_con_msj (vec,5);
//ordenar(vec,5);;
      
printf("\nVECTOR FINAL\n"); 
mostrar(vec,5);
printf("\n");
      
system("PAUSE");
} 