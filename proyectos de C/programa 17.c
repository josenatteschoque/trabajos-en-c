/*Un postulante a un empleo, realiza un test de capacitaci�n, se obtuvo la siguiente informaci�n: cantidad total de preguntas que se le realizaron y la cantidad de preguntas que contest� correctamente. Se pide confeccionar un programa que ingrese los dos datos por teclado e informe el nivel del mismo seg�n el porcentaje de respuestas correctas que ha obtenido, y sabiendo que:
	Nivel m�ximo:	Porcentaje>=90%.
	Nivel medio:	Porcentaje>=75% y <90%.
	Nivel regular:	Porcentaje>=50% y <75%.
	Fuera de nivel:	Porcentaje<50%.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int totalcorrectas, totalpreguntas;
    int porcentaje;
    printf("ingrese cantidad de preguntas:");
    scanf("%i",&totalpreguntas);
    printf("ingrese cantidad de preguntas correctas:");
    scanf("%i",&totalcorrectas);
    porcentaje=(totalcorrectas*100)/totalpreguntas;
    if (porcentaje>=90)
    {
        printf("nivel maximo");
    }
    else
    {
        if (porcentaje>=75)
        {
            printf("nivel medio");
        }
        else
        {
            if (porcentaje>=50)
            {
                printf("nivel regular");
            }
            else
            {
                printf("fuera de nivel");
            }
        }
    }
    getch();
    return 0;
}
