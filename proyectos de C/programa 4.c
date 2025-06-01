/*Realizar la carga del lado de un cuadrado, mostrar por pantalla el perímetro del mismo
(El perímetro de un cuadrado se calcula multiplicando el valor del lado por cuatro)*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int lado, perimetro;
    printf("ingrese el lado del cuadrado:");
    scanf("%i",&lado);
    perimetro=lado*4;
    printf("el perimetro del cuadrado es:");
    printf("%i",perimetro);
    getch();
}
|
