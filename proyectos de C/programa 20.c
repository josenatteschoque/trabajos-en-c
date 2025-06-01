/*Realizar un programa que pida cargar una fecha cualquiera, luego verificar si dicha fecha corresponde a Navidad*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int dd,mm,aa;
    printf("ingrese el dia:");
    scanf("%i",&dd);
    printf("ingrese el mes:");
    scanf("%i",&mm);
    printf("ingrese el año:");
    scanf("%i",&aa);
    if (mm==12 && dd==25)
    {
        printf("es navidad");
    }
    getch();
    return 0;
}
