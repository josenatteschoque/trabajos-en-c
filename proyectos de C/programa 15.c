/*Se ingresa por teclado un valor entero, mostrar una leyenda que indique si el número es positivo,
negativo o nulo (es decir cero)*/

#include<stdio.h>
#include<conio.h>

int main ()

{
    int numero;
    printf("ingrese un numero entero:");
    scanf("%i",&numero);
    if (numero==0)
    {
       printf("el numero es cero");
    }
    else
    {
        if (numero>0)
        {
            printf("el numero es postivo");
        }
        else
        {
            printf("el numero es negativo");
        }
    }

    getch();
    return 0;
}
