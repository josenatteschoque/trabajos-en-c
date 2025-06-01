/*Problema 2:
Implementar una función recursiva que reciba un parámetro de tipo entero y luego llame en forma
recursiva con el valor del parámetro menos 1.*/

#include <stdio.h>

void imprimir(int x)
{
    printf("%d ", x);
    imprimir(x - 1);
}

int main()
{
    imprimir(5);
    return 0;
}

/*el programa se llama a si mismo mostrando en la termianl 5,4,3,2,1,0,-1,-2,-3,-4,-5....
haci hasta que se bloquee el programa*/