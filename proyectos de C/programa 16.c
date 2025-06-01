/*Confeccionar un programa que permita cargar un número entero positivo de hasta tres cifras
y muestre un mensaje indicando si tiene 1, 2, o 3 cifras.
Mostrar un mensaje de error si el número de cifras es mayor.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("ingrese un numero entero positivo de 3 digitos:");
    scanf("%i",&num);
    if (num<10)
    {
        printf("el numero tiene un digito");
    }
    else
    {
        if (num<100)
        {
            printf("el numero tiene 2 digitos");
        }
        else
        {
            if (num<1000)
            {
                printf("el numero tiene 3 digitos");
            }
            else
            {
                printf("el numero tiene mas de 3 digitos");
            }
        }
    }
    getch();
    return 0;
}
