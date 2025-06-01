/*Se ingresan tres notas de un alumno, si el promedio es mayor o igual a siete mostrar un mensaje "Promocionado"*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int not1, not2, not3, promedio;
    printf("ingrese primer nota:");
    scanf("%i",&not1);
    printf("ingrese segunda nota:");
    scanf("%i",&not2);
    printf("ingrese tercer nota:");
    scanf("%i",&not3);
    promedio=(not1+not2+not3)/3;
    if (promedio>=7)
    {
        printf("promociona!");
    }
    else
    {
        printf("no promociona");
    }
    getch();
    return 0;
}

