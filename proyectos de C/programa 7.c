/*Se debe desarrollar un programa que pida el ingreso del precio de un artículo y la cantidad que lleva el cliente.
Mostrar lo que debe abonar el comprador.
Definir una variable float para el precio del artículo.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int cantidad;
    float precio, importe;
    printf("ingrese el precio del articulo:");
    scanf("%f", &precio);
    printf("ingrese la cantidad:");
    scanf("%i", &cantidad);
    importe=precio*cantidad;
    printf("el total a abonar es:");
    printf("%f",importe);
    getch();
    return 0;
}
