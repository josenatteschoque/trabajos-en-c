/*2. Estructura: Libro
Define una estructura llamada Libro que contenga los siguientes datos: título, autor, año de publicación y precio.
Escribe un programa que permita al usuario ingresar los datos de 3 libros y luego imprima los detalles de cada uno.*/
#include <stdio.h>
#include <string.h>
struct libro
{
    char titulo[50];
    char autor[50];
    int anio;
    float precio;
};

int main()
{   
    struct libro libros[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\nIngrese los detalles del libro %d:\n", i + 1);
        printf("titulo: ");
        getchar();
        fgets(libros[i].titulo, 50, stdin);
        // Eliminar el salto de línea que fgets almacena
        libros[i].autor[strcspn(libros[i].autor, "\n")] = '\0';

        printf("autor: ");
        fgets(libros[i].autor, 50, stdin);

        printf("anio de publicacion del libro: ");
        scanf("%d", &libros[i].anio);

        printf("precio: ");
        scanf("%f", &libros[i].precio);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\nlos detalles del libro %d son:\n", i + 1);
        printf("el titulo: %s", libros[i].titulo);
        printf("el autor es: %s", libros[i].autor);
        printf("el anio de publicacion es: %d\n", libros[i].anio);
        printf("el precio es: %.2f\n", libros[i].precio);
    }
    return 0;
}