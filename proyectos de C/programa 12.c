/*Se ingresa por teclado un n�mero positivo de uno o dos d�gitos (1..99) mostrar un mensaje indicando si el n�mero tiene uno o dos d�gitos.
(Tener en cuenta que condici�n debe cumplirse para tener dos d�gitos un n�mero entero)*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int numero;
    printf("ingrese un numero positivo:");
    scanf("%i",&numero);
    if (numero>=10)
    {
        printf("el numero tiene 2 digitos");
    }
    else
    {
        printf("el numero tiene 1 digito");
    }
    getch();
    return 0;
}
