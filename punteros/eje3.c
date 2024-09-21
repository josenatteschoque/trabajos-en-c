/*Ejercicio 3: Encontrar el mayor de tres números usando punteros
Escribe un programa que lea tres números y encuentre el mayor de ellos utilizando punteros.*/
#include <stdio.h>

int mayor(int *a, int *b, int *c) //funcion para saber cual es el numero mayor con punteros
{
    if (*a > *b && *a > *c)
        return *a;
    else if (*b > *a && *b > *c)
        return *b;
    else
        return *c; 
}

int main() //funcion principal
{
    int num1, num2, num3;
    printf("ingrese el primer numero:");
    scanf("%d", &num1);
    
    printf("ingrese el segundo numero:");
    scanf("%d", &num2);

    printf("ingrese el tercer numero:");
    scanf("%d", &num3);

    //llamada ala funcion con las direcciones de la variables
    int resultado = mayor(&num1, &num2, &num3);
    printf("el numero mayor es: %d",resultado);
    return 0;
}