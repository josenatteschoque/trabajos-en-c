/*Implemente la siguiente función y escriba una función main en donde ejemplifique su uso:
int minimo(int arreglo[], int tamaño);*/
#include <stdio.h>

// Función que encuentra el valor mínimo en un arreglo de enteros
int minimo(int arreglo[], int tamanio) 
{
    int min = arreglo[0];  // Inicializamos el valor mínimo con el primer elemento

    for (int i = 1; i < tamanio; i++) {
        if (arreglo[i] < min) {
            min = arreglo[i];  // Actualizamos el valor mínimo si encontramos uno menor
        }
    }

    return min;  // Devolvemos el valor mínimo encontrado
}

int main() 
{
    // Ejemplo de uso de la función minimo
    int numeros[] = {45, 3, 78, 23, 9, -5, 42};  // Arreglo de ejemplo
    int tamanio = sizeof(numeros) / sizeof(numeros[0]);  // Calculamos el tamaño del arreglo

    // Llamada a la función minimo y almacenamos el resultado
    int resultado = minimo(numeros, tamanio);

    // Imprimir el valor mínimo
        printf("El valor minimo en el arreglo es: %d\n", resultado);

    return 0;
}
