/*Confeccionar un programa que pida por teclado tres notas de un alumno, calcule el promedio e imprima alguno de estos mensajes:
Si el promedio es >=7 mostrar "Promocionado".
Si el promedio es >=4 y <7 mostrar "Regular".
Si el promedio es <4 mostrar "Reprobado".*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int not1, not2, not3, promedio;
    printf("ingrese su primer nota:");
    scanf("%i",&not1);
    printf("ingrese su segunda nota:");
    scanf("%i",&not2);
    printf("ingrese su tercera nota:");
    scanf("%i",&not3);
    promedio=(not1+not2+not3)/3;
    if (promedio>=7)
    {
        printf("promociona!");
    }
    else
    {
        if (promedio>=4)
        {
            printf("regular");
        }
        else
        {
            printf("reprueba");
        }
    }
    getch();
    return 0;
}
