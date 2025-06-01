/*Escribir un programa que pida ingresar la coordenada de un punto en el plano,
es decir dos valores enteros x e y (distintos a cero).
Posteriormente imprimir en pantalla en que cuadrante se ubica dicho punto. 
(1º Cuadrante si x > 0 Y y > 0 , 2º Cuadrante: x < 0 Y y > 0, etc.)*/

#include <stdio.h>
int main()
{
    int coordenadaX, coordenadaY;
    printf("ingrese la cordenada de X:");
    scanf("%d", &coordenadaX);

    printf("ingrese la coordenada de Y:");
    scanf("%d", &coordenadaY);

    if (coordenadaX > 0 && coordenadaY > 0)
    {
        printf("se escuentran en el primer cuadrante");
    }
    else 
    {
        if (coordenadaX < 0 && coordenadaY > 0)
        {
            printf("se encuentra en el segundo cuadrante");
        }
        else 
        {
            if (coordenadaX < 0 && coordenadaY < 0)
            {
                printf("se encuentra en el tercer cuadrante");
            }
            else if (coordenadaX > 0 && coordenadaY < 0)
            {
                printf("se encuentera en el cuarto cuadrante");
            }
            else 
            {
                printf("esta sobre el eje");
            }
        }
    }
    return 0;
}