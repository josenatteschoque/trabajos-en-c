/*funcion tipo entero*/
#include <stdio.h>

int sumar(int num1,int num2); //declaracion de la funcion que devuelve un entero

int sumar(int num1,int num2) //estructura de la funcion que suma 2 valores
{
    return num1 + num2; //retorna el resultado
}

int main() //funcion principal
{
    int resultado = sumar(5, 6); //llama ala funcion con lo que retorno
    printf("la suma es: %d",resultado);
    return 0;
}
