/*Realizar la carga de dos números enteros por teclado e imprimir su suma y su producto.*/

#include<stdio.h>
#include<conio.h>

int main()

{
    int num1, num2, suma, producto;
    printf("ingrese un numero entero:");
    scanf("%i",&num1);
    printf("ingrese otro numero entero:");
    scanf("%i",&num2);
    suma=num1+num2;
    producto=num1*num2;
    printf("la suma de los numeros es:");
    printf("%i",suma);
    printf("\n");
    printf("el producto de los numeros es:");
    printf("%i",producto);
    getch();
    return 0;
}
