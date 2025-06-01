/*Se carga una fecha (día, mes y año) por teclado. Mostrar un mensaje si corresponde al primer trimestre del año (enero, febrero o marzo) Cargar por teclado el valor numérico del día, mes y año.
Ejemplo: dia:10 mes:2 año:2017.*/

#include<stdio.h>
#include<conio.h>

int main()
{
// dd,mm y aa son dia,mes y año
   int dd,mm,aa;
   printf("ingrese el dia:");
   scanf("%i",&dd);
   printf("ingrese el mes:");
   scanf("%i",&mm);
   printf("ingrese el año:");
   scanf("%i",&aa);
   if (mm==1 || mm==2 || mm==3)
   {
       printf("corresponde al cuatrimestre");
   }
   getch();
   return 0;
}
