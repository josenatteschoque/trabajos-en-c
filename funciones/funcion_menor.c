/*Problema:Implemente una función que reciba dos números y devuelva el menor de ellos.*/
#include <stdio.h>

int menor(int a, int b); //declaracion de la funcio tipo entera
int menor(int a, int b) //inicia la funcion
{
    if (a < b)
    {
        return a; //devuelve el valor si se cumple la condiccion
    }
    else
    {
        return b; //devuelve el valor si se cumple la condiccion
    }
}

int main() //inicia la funcion principal 
{
    int num1, num2;
    printf("ingrese 2 valores:");
    scanf("%d %d",&num1, &num2);
    printf("el numero menor es: %d",menor(num1, num2)); //llama ala funcion 
    return 0;
}