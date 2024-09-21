//declaracion de punteros
#include <stdio.h>
int main()
{
    int numero = 15; //declaro una variable y la inicializo
    int *puntero = &numero; //declaro un puntero apuntando ala direccion de la variable numero
    // el operador & se usa para obtener la direccion de memoria de una variable 
    printf("el contenido es %d ",*puntero); //imprimo el contenido de lo que contiene el puntero
    return 0;
}