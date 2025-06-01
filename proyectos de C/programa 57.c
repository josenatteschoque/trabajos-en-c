/*Se desea guardar los sueldos de 5 operarios.
Según lo conocido deberíamos definir 5 variables si queremos tener en un cierto momento los 5 sueldos almacenados en memoria.
Empleando un vector solo se requiere definir un único nombre y accedemos a cada elemento por medio del subíndice.*/

#include <stdio.h>

int main()
{
    int sueldo[5];
    for (int i = 0; i < 5; i++)
    {
        printf("ingrese su sueldo:");
        scanf("%d", &sueldo[i]);
    }
    printf("lista de sueldos \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", sueldo[i]);
    }

    return 0;
}
