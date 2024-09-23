//haci se define una estructura
#include <stdio.h>

struct datos //nombre de la estructura
{
    int edad; //tipo de dato1 y nombre de la variable1;
    float altura; //tipo de dato2 y nombre de la variable2;
};

int main() //funcion principal
{
    struct datos datos1; //definimos la estructura
    datos1.edad = 18; //asignamos valores ala estructura 
    datos1.altura = 1.65; //asignamos valores ala estructura
    printf("la edad es: %d\n",datos1.edad); //imprimos los valores
    printf("la altura es: %.2f\n",datos1.altura); //imprimos los valores
    return 0;
}