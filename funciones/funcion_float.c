#include <stdio.h>
float divicion(float a, float b); //declaracion de la funcion tipo flotante

float divicion(float a, float b) //estructura de la funcion
{
    return a / b; //retorna el resultado de la funcion
}

int main() //declaracion de la funcion principal
{
    float resultado = divicion(6, 2); //llama ala funcion divicion 
    printf("el resultado es: %f",resultado); //enprime el resultado 
    return 0;
}