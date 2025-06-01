/*Se cargan por teclado tres números distintos. Mostrar por pantalla el mayor de ellos*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, num3;
    printf("ingrese el primer valor:");
    scanf("%i",&num1);
    printf("ingrese el segundo valor:");
    scanf("%i",&num2);
    printf("ingrese el tercer valor:");
    scanf("%i",&num3);
    if (num1>num2)
    {
        if (num1>num3)
        {
            printf("es mayor el %i",num1);
        }
        else
        {
            printf("es mayor el %i",num3);
        }
    }
    else
    {
        if (num2>num3)
        {
            printf("es mayor el %i",num2);
        }
        else
            printf("es mayor el %i",num3);
    }
    getch();
    return 0;
}
