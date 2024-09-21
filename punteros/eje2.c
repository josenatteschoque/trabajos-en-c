/*Ejercicio 2: Intercambiar dos números utilizando punteros
Escribe una función que intercambie los valores de dos variables usando punteros.
Luego, en el programa principal, solicita dos números, realiza el intercambio y muestra los resultados.*/

#include <stdio.h>
//funcion para intercambiar 2 valores con punteros
void intercambiar(int *a, int *b)
{
    int x = *a;
    *a = *b ;
    *b = x;
}

int main() //funcion principal
{
    int num1, num2;
    printf("ingrese un numero:");
    scanf("%d", &num1);

    printf("ingrese otro numero:");
    scanf("%d", &num2);

    printf("los valores originales de los numero son: %d / %d\n", num1, num2);
    //llamada ala funcion 
    intercambiar(&num1, &num2);

    printf("los valores ahora intercambiados son %d / %d", num1, num2);

    return 0;
}