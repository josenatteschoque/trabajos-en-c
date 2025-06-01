/*Escribir un programa en el cual se ingresen cuatro números,
calcular e informar la suma de los dos primeros y el producto del tercero y el cuarto.*/

#include<stdio.h>
#include<conio.h>

int main()
{

    int num1, num2, num3, num4;
    int suma;
    int producto;
    printf("ingrese el primer numero:");
    scanf("%i",&num1);
    printf("ingrese el segundo numero:");
    scanf("%i",&num2);
    printf("ingrese el tercer numero:");
    scanf("%i",&num3);
    printf("ingrese el cuarto numero:");
    scanf("%i",&num4);
    suma=num1+num2;
    producto=num3*num4;
    printf("la suma de los 2 primeros numeros es:");
    printf("%i",suma);
    printf("\n");
    printf("el producto de los 2 ultimos numeros es:");
    printf("%i",producto);
    getch();
    return 0;
}
