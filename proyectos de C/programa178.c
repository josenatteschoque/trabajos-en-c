/*Problema 6:
Implementar un algoritmo recursivo para ordenar los elementos de un vector.*/

#include <stdio.h>
#define CANTIDAD 5

void cargar(int vec[CANTIDAD])
{
    for (int i = 0; i < CANTIDAD; i++)
    {
        printf("ingrese un elemento:");
        scanf("%d", &vec[i]);
    }
}

void imprimir(int vec[CANTIDAD])
{
    for (int i = 0; i < CANTIDAD; i++)
    {
        printf("%d ", vec[i]);
    }
    printf("\n");
}

void ordenar(int vec[CANTIDAD], int cant)
{
    if (cant > 1)
    {
        for (int f = 0; f < cant - 1; f++)
        {
            if (vec[f] > vec[f + 1])
            {
                int aux = vec[f];
                vec[f] = vec[f + 1];
                vec[f + 1] = aux;
            }
        }
        ordenar(vec, cant - 1);
    }
}

int main()
{
    int vec[CANTIDAD];
    cargar(vec);
    imprimir(vec);
    ordenar(vec, CANTIDAD);
    imprimir(vec);
    return 0;
}