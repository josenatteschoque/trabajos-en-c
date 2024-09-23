/*3.Ejercicio: Estructura Rectángulo
Crea una estructura llamada Rectangulo que almacene la base y la altura de un rectángulo.
Escribe un programa que calcule y muestre el área del rectángulo (Área = base * altura).*/

#include <stdio.h>

struct rectangulo //defino la estructura
{
    float base;
    float altura;
};

int main() //funcion principal
{
    struct rectangulo rectangulo; //llamo ala estructura
    printf("ingrese la base: ");
    scanf("%f", &rectangulo.base);
    printf("ingrese la altura: ");
    scanf("%f", &rectangulo.altura);
    float area = rectangulo.base * rectangulo.altura; //calculo el area del rectangulo
    printf("el area del rectangulo es: %.2f", area); //imprimo el resultado
    return 0;
}