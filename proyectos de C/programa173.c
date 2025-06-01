/*Problema 1
Implementación de una función recursiva.*/

#include <stdio.h>

void repetir()
{
    repetir();
}

int main()
{
    repetir();
    return 0;
}

/*La función repetir es recursiva porque dentro de la función se llama a sí misma.
Cuando ejecuta este programa se bloqueará y generará una error

Analicemos como funciona:
Primero se ejecuta la función main, luego se llama la función repetir.
Hay que tener en cuenta que cada vez que se llama a una función se reservan 4 bytes por 
lo general de la memoria que se liberarán cuando finalice su ejecución.
La primera línea de la función llama a la función repetir, es decir que se reservan 4 bytes 
nuevamente. Se ejecuta nuevamente una instancia de la función repetir y así sucesivamente hasta
que la pila estática se colme y se cuelgue el programa.*/