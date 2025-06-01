#include<stdio.h>

int main()
{
    int horasTrabajadas;
    float costoHora;
    float sueldo;
    printf("ingrese las horas trabajadas:");
    scanf("%i",&horasTrabajadas);
    printf("ingrese pago por hora:");
    scanf("%f",&costoHora);
    sueldo=horasTrabajadas*costoHora;
    printf("el sueldo es:");
    printf("%f",sueldo);
    getchar();
    return 0;
}
