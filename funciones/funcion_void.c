/*funcion tipo void*/

#include <stdio.h>

void hellowordl (); //declaracion de la funcion sin parametros

int main() //funcion principal
{
    hellowordl(); //llamada ala funcion 
    return 0;
}

void hellowordl() //estructura de la funcion 
{
    printf("hola mundo!");
}
