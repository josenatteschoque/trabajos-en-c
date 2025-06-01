/*Problema 3:
Implementar una función recursiva que imprima en forma descendente de 5 a 1 de uno en uno.*/

#include <stdio.h>

void imprimir(int x)
{
    if(x > 0)
    {
        printf("%d ", x);
        imprimir(x - 1);
    }
}

int main()
{
    imprimir(5);
    return 0;
}