/*Se carga una fecha (d�a, mes y a�o) por teclado. Mostrar un mensaje si corresponde al primer trimestre del a�o (enero, febrero o marzo) Cargar por teclado el valor num�rico del d�a, mes y a�o.
Ejemplo: dia:10 mes:2 a�o:2017.*/

#include<stdio.h>
#include<conio.h>

int main()
{
// dd,mm y aa son dia,mes y a�o
   int dd,mm,aa;
   printf("ingrese el dia:");
   scanf("%i",&dd);
   printf("ingrese el mes:");
   scanf("%i",&mm);
   printf("ingrese el a�o:");
   scanf("%i",&aa);
   if (mm==1 || mm==2 || mm==3)
   {
       printf("corresponde al cuatrimestre");
   }
   getch();
   return 0;
}
