/*Realizar un programa que lea cuatro valores numéricos e informar su suma y promedio*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, num3, num4;
    float suma;
    float promedio;
    printf("ingrese el primer valor:");
    scanf("%d",&num1);
    printf("ingrese el segundo valor:");
    scanf("%d",&num2);
    printf("ingrese el tercer valor:");
    scanf("%d",&num3);
    printf("ingrese el cuarto valor:");
    scanf("%d",&num4);
    suma=num1+num2+num3+num4;
    promedio=suma/4;
    printf("la suma de los valores es:");
    printf("%f",suma);
    printf("\n");
    printf("el promedio de los valores ingresados es:");
    printf("%f",promedio);
    getch();
    return 0;
}
