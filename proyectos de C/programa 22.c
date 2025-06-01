/*Se ingresan por teclado tres números, si todos los valores ingresados son menores a 10,
imprimir en pantalla la leyenda "Todos los números son menores a diez".*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,num3;
    printf("ingrese el primer valor:");
    scanf("%i",&num1);
    printf("ingrese el segundo valor:");
    scanf("%i",&num2);
    printf("ingrese el tercer valor:");
    scanf("%i",&num3);
    if (num1<10 && num2<10 && num3<10)
    {
        printf("todos los numeros son menores a diez");
    }
    getch();
    return 0;
}
