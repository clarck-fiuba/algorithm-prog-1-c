/**
 * @file encuesta_px_py_e1.c
 * @author Clarck M. (cmonclair@fi.uba.ar)
 * @brief 
 * @version 0.1
 * @date 2022-05-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */


/**

Se realiza una encuesta para estimar el grado de aceptación de los
productos x e y en el mercado. A cada encuestado se le pregunta si
consume el producto x y si consume el producto y. La respuesta puede
ser sí o no. Se pide calcular e informar el porcentaje de consumidores
de:
a) del producto x
b) del producto y
c) del producto x solamente
d) del producto y solamente
e) de ambos productos
f) de ninguno de los productos

- brainstorm
- una matrix consumos de consumidores x productos
    consumos[n_consumidor][producto,]
- iniciamos la encuesta, iniciamos la matrix
    - empezamos con un consumidor
    - preguntamos cada producto si consume
    - si lo consume agregamos x o y en el vector producto del consumidor
- guardamos la cantidad de consumidor que tenemos
- recuperamos la cantidad de consumidores qui consume px o py o los dos o ninguno ( imaginamos 6 funciones)
- calculamos los porcentajes
 - ( consumidores_px * 100 ) / total_consumidores
 - ( consumidores_py * 100 ) / total_consumidores
 - ( consumidores_pxnopy * 100 ) / total_consumidores
 - ( consumidores_pynopx * 100 ) / total_consumidores
 - ( consumidores_pxpy * 100 ) / total_consumidores
 - ( consumidores_nopxpy * 100 ) / total_consumidores

 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_CONSUMIDOR 6
#define MAX_PROD 2

typedef int Consumos[MAX_CONSUMIDOR][MAX_PROD];

int iniciarEncuesta(Consumos consumos);
int consumidoresPx(Consumos consumos, int total_consumidores);
int consumidoresPy(Consumos consumos, int total_consumidores);
int consumidoresNoPx(Consumos consumos, int total_consumidores);
int consumidoresNoPy(Consumos consumos, int total_consumidores);
int consumidoresPxy(Consumos consumos, int total_consumidores);
int consumidoresNoPxy(Consumos consumos, int total_consumidores);

float porcentaje(int consumidores, int total_consumidores);
void pr_consumos(Consumos consumos, int total_consumidores);

int main()
{
    Consumos consumos = {{1, 1}, {1, 0}, {0, 1}, {1, 0}, {1, 1}, {1, 0}};
    int total_consumidores = 6;
    // total_consumidores = iniciarEncuesta(consumos);
    // pr_consumos(consumos, total_consumidores);

    printf("\n%.2f %% de los encuestados consumen px\n", porcentaje(consumidoresPx(consumos, total_consumidores), total_consumidores));
    printf("\n%.2f %% de los encuestados consumen py\n", porcentaje(consumidoresPy(consumos, total_consumidores), total_consumidores));
    printf("\n%.2f %% de los encuestados no consumen px\n", porcentaje(consumidoresNoPx(consumos, total_consumidores), total_consumidores));
    printf("\n%.2f %% de los encuestados no consumen py\n", porcentaje(consumidoresNoPy(consumos, total_consumidores), total_consumidores));
    printf("\n%.2f %% de los encuestados consumen px y py\n", porcentaje(consumidoresPxy(consumos, total_consumidores), total_consumidores));
    printf("\n%.2f %% de los encuestados no consumen px tampoco py\n\n", porcentaje(consumidoresNoPxy(consumos, total_consumidores), total_consumidores));
    return 0;
}

int consumidoresPx(Consumos consumos, int total_consumidores)
{
    int consumidores = 0, i;
    for (i = 0; i < total_consumidores; i++)
    {
        if (consumos[i][0] == 1)
            consumidores++;
    }
    return consumidores;
}

int consumidoresPy(Consumos consumos, int total_consumidores)
{
    int consumidores = 0, i;
    for (i = 0; i < total_consumidores; i++)
    {
        if (consumos[i][1] == 1)
            consumidores++;
    }
    return consumidores;
}

int consumidoresNoPx(Consumos consumos, int total_consumidores)
{
    int consumidores = 0, i;
    for (i = 0; i < total_consumidores; i++)
    {
        if (consumos[i][0] == 0)
            consumidores++;
    }
    return consumidores;
}

int consumidoresNoPy(Consumos consumos, int total_consumidores)
{
    int consumidores = 0, i;
    for (i = 0; i < total_consumidores; i++)
    {
        if (consumos[i][1] == 0)
            consumidores++;
    }
    return consumidores;
}

int consumidoresPxy(Consumos consumos, int total_consumidores)
{
    int consumidores = 0, i;
    for (i = 0; i < total_consumidores; i++)
    {
        if (consumos[i][0] == 1 && consumos[i][1] == 1)
            consumidores++;
    }
    return consumidores;
}

int consumidoresNoPxy(Consumos consumos, int total_consumidores)
{
    int consumidores = 0, i;
    for (i = 0; i < total_consumidores; i++)
    {
        if (consumos[i][0] == 0 && consumos[i][1] == 0)
            consumidores++;
    }
    return consumidores;
}

int iniciarEncuesta(Consumos consumos)
{
    int continuar = 1;
    int id_cons = 0;
    int uso1 = 0;
    int uso2 = 0;
    printf("Bienvenido al programa de encuesta sobre px y py.\n");
    while (continuar == 1)
    {
        printf("Consumidor %d:\n", id_cons);
        printf("Usaste px alguna vez?.\n 1. Si\n 0. No\n>");
        scanf("%d", &uso1);
        printf("Usaste py alguna vez?.\n 1. Si\n 0. No\n>");
        scanf("%d", &uso2);

        consumos[id_cons][0] = uso1;
        consumos[id_cons][1] = uso2;

        id_cons++;
        printf("Respuesta guardada.\n");
        printf("Seguir con otro consumidor?\n1. Si\n0. No.\n");
        scanf("%d", &continuar);
    }

    return id_cons;
}

float porcentaje(int consumidores, int total_consumidores)
{
    float porcentaje = 0;
    if (total_consumidores > 0) 
        porcentaje = (float) (consumidores * 100) / total_consumidores; 
    return porcentaje;
}

void pr_consumos(Consumos consumos, int total_consumidores)
{
    int i, j;
    for (i = 0; i < total_consumidores; i++)
    {
        for (int j = 0; j < MAX_PROD; j++)
        {
            printf("%d=>%d\n", i, consumos[i][j]);
        }
    }
}