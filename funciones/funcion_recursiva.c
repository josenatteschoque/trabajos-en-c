/*calcula el factorial con una funcion recursiva*/

#include <stdio.h>

// Función recursiva para calcular el factorial
int factorial(int n)
{
    //   Caso base: si n es 0 o 1, devolver 1
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else 
    {
        // Caso recursivo: n * factorial de (n-1)
        return n * factorial(n - 1);
    }
}

int main()
{
    int num;
    printf("ingrese un numero: ");
    scanf("%d", &num);
    int resul = factorial(num);
    printf("el factorial de %d es %d", num, resul);
    return 0;
}