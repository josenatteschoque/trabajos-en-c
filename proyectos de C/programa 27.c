/*Realizar un programa que imprima en pantalla los números del 1 al 100.
Sin conocer las estructuras repetitivas podemos resolver el problema empleando una estructura secuencial. 
Inicializamos una variable con el valor 1, luego imprimimos la variable, incrementamos nuevamente la variable y así 
sucesivamente.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int x=1;
    while (x<=100)
    {
        printf("%i ",x);
        x=x+1;
    }
    getch();
    return 0;
}
