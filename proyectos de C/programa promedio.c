#include<stdio.h>
#include<conio.h>

int main()
{
    int notas1;
    int notas2;
    int notas3;
    int suma;
    int promedio;
    printf("ingrese sus notas:");
    printf("\n");
    scanf("%i",&notas1);
    printf("\n");
    scanf("%i",&notas2);
    printf("\n");
    scanf("%i",&notas3);
    printf("\n");
    suma=notas1+notas2+notas3;
    promedio=suma/3;
    printf("su promedio es:");
    printf("%i",promedio);
    getch();
    return 0;
}
