/*Se ingresan por teclado tres números, si al menos uno de los valores ingresados es menor a 10,
imprimir en pantalla la leyenda "Alguno de los números es menor a diez".*/

#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("ingrese el primer valor:");
    scanf("%d", &num1);

    printf("ingrese el segundo valor:");
    scanf("%d", &num2);

    printf("ingrese el tercer valor:");
    scanf("%d", &num3);
    
    if (num1 < 10 || num2 < 10 || num3 < 10)
    {
        printf("algunos de los numeros es menor que 10");
    }
    return 0;
}