//Hallar la superficie de un cuadrado conociendo el valor de un lado.

#include<stdio.h>

int main()

{
    int lado;
    int perimetro;
    printf("ingrese el lado del cuadrado:");
    scanf("%i",&lado);
    perimetro=lado*lado;
    printf("el perimetro es:");
    printf("%i",perimetro);
    return 0;
}
