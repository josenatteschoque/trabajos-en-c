/*Ejercicio 1: Sumar dos números usando punteros
Escribe un programa que lea dos números, los sume utilizando punteros y muestre el resultado.*/
#include <stdio.h>

int main()
{
    int num1, num2, suma;
    int *puntero1, *puntero2;

    printf("ingrese el primer valor:");
    scanf("%d", &num1);

    printf("ingrese el segundo valor:");
    scanf("%d", &num2);

    puntero1 = &num1;
    puntero2 = &num2;
    suma = *puntero1 + *puntero2;
    printf("la suma es: %d", suma);
    return 0;
}