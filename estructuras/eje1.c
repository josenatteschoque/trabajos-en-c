/*1. Ejercicio básico de estructura: Persona
Define una estructura llamada Persona que almacene el nombre, la edad y la dirección de una persona.
Luego, escribe un programa que permita al usuario ingresar estos datos para una persona y los muestre por pantalla.*/
#include <stdio.h>

struct persona //defino la estructura
{
    char nombre[50];
    int edad;
    char direccion[100];
};

int main() //funcion principal
{
    struct persona persona1; //llamo ala estructura
    printf("ingrese su nombre:"); //pide al usuario que ingrese un nombre
    scanf("%s", persona1.nombre);

    printf("ingrese su edad:"); //pide al usuario que ingrese su edad
    scanf("%d", &persona1.edad);

    printf("ingrese su direccion:"); //pide al usuario que ingrese su direccion
    scanf("%s", persona1.direccion);
    
    //imprime los datos
    printf("su nombre es: %s\n", persona1.nombre);
    printf("su edad es: %d\n", persona1.edad);
    printf("su direccion es: %s\n", persona1.direccion);
    return 0;
}