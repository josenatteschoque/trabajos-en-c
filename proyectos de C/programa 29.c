/*Desarrollar un programa que permita la carga de 10 valores por teclado y nos muestre posteriormente la suma de 
los valores ingresados y su promedio.*/

#include <stdio.h>
int main()
{
    int num, x = 1, sumas = 0, promedio;
    while (x <= 10)
    {
        printf("ingrese un numero: ");
        scanf("%d", &num);
        sumas = sumas + num;
        x = x + 1;
    }
    promedio = sumas / 10;
    printf("la suma es: %d\n", sumas);
    printf("el promedio es: %d\n", promedio);
    return 0;
}