#include<stdio.h>

int main()

{
    float numero;
    int multiplicador;
    float resultado;
    printf("ingresar un numero:");
    scanf("%f",&numero);
    printf("ingresa el multiplicardor:");
    scanf("%i",&multiplicador);
    resultado=numero*multiplicador;
    printf("el resultado es:");
    printf("%f",resultado);
    getchar();
    return 0;
}
