/*De un operario se conoce su sueldo y los años de antigüedad. Se pide confeccionar un programa que lea los datos de entrada e informe:
a) Si el sueldo es inferior a 500 y su antigüedad es igual o superior a 10 años, otorgarle un aumento del 20 %, mostrar el sueldo a pagar.
b)Si el sueldo es inferior a 500 pero su antigüedad es menor a 10 años, otorgarle un aumento de 5 %.
c) Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios.*/

#include <stdio.h>
int main()
{
    int sueldo;
    int antiguedad;
    int aumento;
    int sueldopag;
    printf("ingrese su sueldo:");
    scanf("%d", &sueldo);
    printf("ingrese su antiguedad:");
    scanf("%d", &antiguedad);
    if (sueldo < 500 && antiguedad >= 10)
    {
        aumento = sueldo * 0.20;
        sueldopag = sueldo + aumento;
        printf("total a pagar es: %d", sueldopag);
    }
    else 
    {
        if (sueldo < 500)
        {
            aumento = sueldo * 0.05;
            sueldopag = sueldo + aumento;
            printf("total a pagar es: %d", sueldopag);
        }
        else 
        {
            printf("el sueldo es: %d", sueldo);
        }
    }
    return 0;
}