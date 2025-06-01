#include<stdio.h>
int main()
{
    char nombre1[21];
    char nombre2[21];
    int edad1;
    int edad2;
    printf("ingrese el nombre de la primera persona:");
    gets(nombre1);
    printf("ingrese su edad:");
    scanf("%i",&edad1);
    fflush(stdin);

    printf("ingrese el nombre de la segunda persona:");
    gets(nombre2);
    printf("ingrese su edad:");
    scanf("%i",&edad2);

    if (edad1 > edad2)
    {
        printf("es mayor: %s",nombre1);
    }
    else
    {
        if (edad2 > edad1)
        {
            printf("es mayor: %s",nombre2);
        }
        else
        {
            printf("tienen la misma edad %s y %s",nombre1,nombre2);
        }
    }
    return 0;
}
