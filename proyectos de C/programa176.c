/*Problema 4:
Imprimir los números de 1 a 5 en pantalla utilizando recursividad.*/

#include <stdio.h>
void imprimir(int x)
{
    if (x > 0)
    {
        imprimir(x - 1);
        printf("%i ", x);
    }
}
int main()
{
    imprimir(5);
    return 0;
}