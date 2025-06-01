/*Se ingresan tres valores por teclado, si todos son iguales se imprime la suma del primero con el segundo y a
este resultado se lo multiplica por el tercero.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, num3, suma, producto;
    printf("ingrese el primer valor:");
    scanf("%i",&num1);
    printf("ingrese el segundo valor:");
    scanf("%i",&num2);
    printf("ingrese el tercer valor:");
    scanf("%i",&num3);
    suma=num1+num2;
    producto=suma*num3;
    if (num1==num2 && num1==num3)
    {
        printf("el resultado de la suma de los 2 primeros valores es:");
        printf("%i",suma);
        printf("\n");
        printf("el resultado del producto es:");
        printf("%i",producto);
    }
    getch();
    return 0;
}
