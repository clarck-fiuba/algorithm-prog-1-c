
/*
Ingresar los padrones y las notas de los alumnos
del curso de Algoritmos y programación 1.

Como máximo podrán ser cargados 50 alumnos.
---------------------------------------------------
Se piden:
1) Mostrar aprobados (padrón y nota) en orden de notas crecientes.
2) Agregar un modulo que permita la busqueda, dado un padrón indicar que nota obtuvo el alumno.
3) Incluir módulo de carga
*/

#include <stdio.h>
#include <string.h>

#define MAX 50

typedef int TNota;
typedef TNota TvecNotas[MAX];

typedef long TPadron;
typedef TPadron TVecPadrones[MAX];

void intercambio(int posA, int posB, TVecPadrones Padrones, TvecNotas Notas){
    long auxp = Padrones[posA];
    int auxn = Notas[posA];
    Padrones[posA] = Padrones[posB];
    Notas[posA] = Notas[posB];
    Padrones[posB] = auxp;
    Notas[posB] = auxn;
}

void cargar_datos(TVecPadrones Padrones, TvecNotas Notas, int *cant_alumnos)
{
    char seguir = 'n';
    do
    {
        printf("Ingresar padron: \n");
        scanf("%ld", Padrones);  
        printf("Ingresar nota: \n");
        scanf("%d", Notas);

        (*cant_alumnos)++;
        Padrones++;
        Notas++;

        if (*cant_alumnos == MAX)
            seguir = 'n';
        else{
            do{
                printf("Ingresar mas notas? (S/n): \n");
                scanf(" %c", &seguir);
                if (seguir != 's' && seguir != 'n')
                    printf("Por favor elija una opcion 's' por si / 'n' por no: \n");
            }while(seguir != 's' && seguir != 'n');
        }

    } while (seguir != 'n');
}

void ordenar_datos_notas(TVecPadrones Padrones, TvecNotas Notas, int cant_alumnos) {
    int pos,j;
    for (pos=1; pos < cant_alumnos; pos++){
        for (j=0;j < cant_alumnos-1; j++){
            if (Notas[j] > Notas[j+1])
                intercambio(j, j+1, Padrones, Notas);
        }
    }
}
void mostrar_aprobados(TVecPadrones Padrones, TvecNotas Notas, int cant_alumnos) {
    for (int i=0; i < cant_alumnos;i++){
        if ( Notas[i] >= 4 )
            printf("%ld => %d (Aprobado)\n", Padrones[i], Notas[i]);
    }
}
void ordenar_datos_padron(TVecPadrones Padrones, TvecNotas Notas, int cant_alumnos) {
    int pos, j;
    for (pos=1; pos < cant_alumnos; pos++){
        for (j=0;j < cant_alumnos-1; j++){
            if (Padrones[j] > Padrones[j+1])
                intercambio(j, j+1, Padrones, Notas);
        }
    }
}
long idx_padron(long padron, TVecPadrones Padrones, int cant_alumnos){
    long inf, sup, mit, pos;
    int fin = 0;
    inf = 0;
    sup = cant_alumnos - 1;
    pos = -1;

    // printf("buscando : %ld\n", padron);

    while (fin != 1)
    {
        if ((padron > Padrones[sup]) || (padron < Padrones[inf])){
            fin = 1;
            pos = -1;
            // printf("inexistante : %ld\n", padron);
        }else{
            mit = (inf + sup) / 2;
            if (padron == Padrones[mit]){
                fin = 1;
                pos = mit;
            }else if(padron > Padrones[mit])
                inf = mit + 1;
            else
                sup = mit - 1;
        }
    }
    return pos;
}

void buscar_alumno(TVecPadrones Padrones, TvecNotas Notas, int cant_alumnos) {
    char seguir = 'n';
    long padron = 0;

    do
    {
        printf("Buscar padron: \n");
        scanf("%ld", &padron);  

        long indexP = idx_padron(padron, Padrones, cant_alumnos);
        if (indexP >= 0)
            printf("%ld => %d \n", padron, Notas[indexP]);
        else
            printf("%ld => no encontrado!\n", padron);
        
        do{
            printf("Seguir buscando ? (S/n): \n");
            scanf(" %c", &seguir);
            if (seguir != 's' && seguir != 'n')
                printf("Por favor elija una opcion 's' por si / 'n' por no: \n");
        }while(seguir != 's' && seguir != 'n');
    } while (seguir != 'n');
}

int main()
{
    TVecPadrones Padrones = {1234, 1233, 1123, 2134, 1223};
    TvecNotas Notas = {8, 6, 4, 3, 9};
    int cant_alumnos = 5;

    // carga de datos
    // cargar_datos(Padrones, Notas, &cant_alumnos);

    // se ordenan los datos según nota ascendente
    ordenar_datos_notas(Padrones, Notas, cant_alumnos);

    // mostrar padrones de alumnos aprobados
    mostrar_aprobados(Padrones, Notas, cant_alumnos);

    // se ordenan los datos según padron ascendente
    ordenar_datos_padron(Padrones, Notas, cant_alumnos);

    buscar_alumno(Padrones, Notas, cant_alumnos);

    return 0;
}