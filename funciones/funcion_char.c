#include <stdio.h>
#define TAMANO 50

char *obtener_nombre(char name[TAMANO]); //define la funcion de tipo caracter

char *obtener_nombre(char name[TAMANO]) //inicia la funcion 
{
    return name; //devuelve el nombre
}

int main() //funcion principal
{
    char name [TAMANO];
    printf("ingrese su nombre:");
    scanf("%s",name);

    printf("tu nombre es: %s", obtener_nombre(name)); //llamada ala funcion
    return 0;
}