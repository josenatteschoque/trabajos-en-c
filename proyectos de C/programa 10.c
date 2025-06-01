/*Realizar un programa que solicite la carga por teclado de dos números,
si el primero es mayor al segundo informar su suma y diferencia,
en caso contrario informar el producto y la división del primero respecto al segundo.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int suma, diferen, produc;
    float div, num1, num2;
    printf("ingrese un numero:");
    scanf("%f",&num1);
    printf("ingrese otro numero:");
    scanf("%f",&num2);
    if (num1>num2)
    {
       suma=num1+num2;
       diferen=num1-num2;
       printf("la suma es:");
       printf("%i",suma);
       printf("\n");
       printf("la diferencia es:");
       printf("%i",diferen);
    }
    else
    {
    produc=num1*num2;
    div=num1/num2;
    printf("el producto es:");
    printf("%i",produc);
    printf("\n");
    printf("la divicion es:");
    printf("%f",div);
    }

    getch();
    return 0;
}
