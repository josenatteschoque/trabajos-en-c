/*Problema 5:
Otro problema típico que se presenta para analizar la recursividad es el obtener el factorial de un número.
Recordar que el factorial de un número es el resultado que se obtiene de multiplicar dicho número por el anterior y así sucesivamente hasta llegar a uno.
Ej. el factorial de 4 es 4 * 3 * 2 * 1 es decir 24.*/

#include <stdio.h>

int factorial(int x)
{
    if (x > 0)
    {
        int valor = x * factorial(x - 1);
        return valor;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int num;
    printf("ingrese un numero:");
    scanf("%d", &num);
    printf("el factorial es: %d", factorial(num));
    return 0;
}