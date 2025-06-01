/*Escribir un programa en el cual: dada una lista de tres valores numéricos distintos se calcule e informe su rango de variación 
(debe mostrar el mayor y el menor de ellos)*/

#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("ingrese 3 numeros:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("el mayor es: %d\n", num1);
    }
    else
    {
        if (num2 > num3)
        {
            printf("el mayor es: %d\n", num2);
        }
        else 
        {
            printf("el mayor es: %d\n", num3);
        }
    }
    if (num1 < num2 && num1 < num3)
    {
        printf("el menor es: %d\n", num1);
    }
    else
    {
        if (num2 < num3)
        {
            printf("el menor es: %d\n", num2);
        }
        else 
        {
            printf("el menor es: %d\n", num3);
        }
    }
    return 0;
}