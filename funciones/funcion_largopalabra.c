/*Implemente la siguiente función y escriba una función main en donde ejemplifique su uso:
int largoPalabra(char[] palabra);*/
#include <stdio.h>
#include <string.h>
int largopalabra(char palabra[50]) //estructura de la funcion
{
    int largo = strlen(palabra); //uso la funcion strlen que calcula cuantos caracteres tiene y devuelve un entero
    return largo; //devuelve el largo de la cadena 
}

int main() //funcion principal
{
    char cadena[50];
    printf("ingrese una cadena:");
    scanf("%s", cadena);
    printf("el largo de la cadena es: %d", largopalabra(cadena)); //llama ala funcion y imprime el resultado
    return 0;
}