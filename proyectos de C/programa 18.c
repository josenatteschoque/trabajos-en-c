/*Confeccionar un programa que lea por teclado tres n�meros distintos y nos muestre el mayor.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,num3;
    printf("ingrese primer valor:");
    scanf("%i",&num1);
    printf("ingrese segundo valor:");
    scanf("%i",&num2);
    printf("ingrese tercer valor:");
    scanf("%i",&num3);
    if (num1>num2 && num1>num3)
    {
        printf("el mayor es el %i",num1);
    }
    else
    {
        if (num2>num3)
        {
            printf("es el mayor %i",num2);
        }
        else
        {
            printf("es el mayor %i",num3);
        }
    }
    getch();
    return 0;
}
