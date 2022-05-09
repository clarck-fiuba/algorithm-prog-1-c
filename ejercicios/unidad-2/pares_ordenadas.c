/**
 * @file pares_ordenadas.c
 * @author Clarck M. (cmonclair@fi.uba.ar)
 * @brief
 * @version 0.1
 * @date 2022-05-08
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * @brief Se tiene un listado de pares ordenados (x,y) de puntos de un plano, con
-99< x <+99, -99< y <+99. Informar por cada par, si pertenece, si es
exterior o interior al rectángulo de coordenadas 3 <+x <+5, 2<+y <+3.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_PARES 5

typedef float Pares[MAX_PARES][2];
typedef float Par[2];

void topologia(Pares pares, int total_pares, float x0, float x1, float y0, float y1);

int main()
{
    Pares pares = {{2, 4}, {4, 2.5}, {2, 2.5}, {1, 3}, {4, 7}};
    float x0 = 3, x1 = 5, y0 = 2, y1 = 3;
    topologia(pares, MAX_PARES, x0, x1, y0, y1);
    return 0;
}
void topologia(Pares pares, int total_pares, float x0, float x1, float y0, float y1)
{
    int i;
    for (i = 0; i < total_pares; i++)
    {
        float px = (float)pares[i][0];
        float py = (float)pares[i][1];
        if ((px > x0 && px < x1) && (py > y0 && py < y1))
        {
            printf("El punto (%.1f, %.1f) es interior al rectangulo.\n", px, py);
        }
        else
        {
            printf("El punto (%.1f, %.1f) es exterior al rectangulo.\n", px, py);
        }
    }
}
