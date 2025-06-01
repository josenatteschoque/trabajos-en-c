/*Realizar un programa que solicite al operador ingresar dos números y muestre por pantalla el mayor de ellos.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2;
    printf("ingrese un numero:");
    scanf("%i",&num1);
    printf("ingrese otro numero:");
    scanf("%i",&num2);
    printf("el numero mayor es:");
    if (num1>num2)
    {
        printf("%i",num1);
    }
    else
    {
    printf("%i",num2);
    }

    getch();
    return 0;
}
