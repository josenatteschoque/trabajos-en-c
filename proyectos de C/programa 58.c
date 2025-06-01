/*Definir un vector de 5 componentes de tipo float que representen las alturas de 5 personas.
Obtener el promedio de las mismas. Contar cuántas personas son más altas que el promedio y cuántas más bajas.*/

#include <stdio.h>

int main()
{
    float altura[5];
    float promedio, suma;
    int mayor = 0, menor = 0;
    for(int i = 0; i < 5; i++)
    {
        printf("ingrese su altura: ");
        scanf("%f", &altura[i]);
        suma += altura[i];
    }
    promedio = suma/5;
    printf("el promedio de las alturas es: %0.2f\n", promedio);

    for (int i = 0; i < 5; i++)
    {
        if (altura[i] > promedio)
        {
            mayor++;
        }
        else
        {
            if (altura[i] < promedio)
            {
               menor++;
            }
        }
    }
    printf("la cantidad de personas mas altas que el promedio son: %d\n", mayor);
    printf("la cantidad de personas mas bajas que el promedio son: %d\n", menor);

    return 0;
}
