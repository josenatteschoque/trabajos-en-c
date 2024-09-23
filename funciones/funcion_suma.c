/*funcion de tipo entero*/
#include <stdio.h>

int suma(int a, int b) //estructura de la funcion
{
    return a + b; //devuelve el resultado
}

int main() //funcion principal
{
    int num1, num2; //declaracion de variables
    printf("ingrese un numero: "); //pide al usuario que ingrese 2 valores 
    scanf("%d", &num1);
    printf("ingrese otro numero: ");
    scanf("%d", &num2);
    printf("el resultado es: %d", suma(num1, num2)); //llama ala funcion y la imprime 
    return 0;
}
