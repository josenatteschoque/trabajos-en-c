/*Escribir un programa que solicite la carga de un valor positivo y nos muestre desde 1 hasta el valor ingresado de uno en uno.
Ejemplo: Si ingresamos 30 se debe mostrar en pantalla los números del 1 al 30.*/

#include <stdio.h>
int main()
{
    int num, x = 1;
    printf("ingrese un numero:");
    scanf("%d", &num);
    while (x <= num)
    {
        printf("%d ", x);
        x = x + 1;
    }
    return 0;
}