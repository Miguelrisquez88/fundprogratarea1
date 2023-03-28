/*mickelle risquez 23.858.883 seccion 3*/

/*Ejercicio 5: Escribir en lenguaje C un programa que:
1º) Pida por teclado dos números (datos enteros) y sean almacenados en dos variables, llamadas v1
y v2.
2º) Intercambie los valores de las variables.
3º) Muestre por pantalla los valores contendidos en las variables.*/

#include <stdio.h>

int main()
{
    int v1, v2, aux;

    printf( "Introduzca el valor de v1: ");
    scanf( "%d", &v1);
    printf( "Introduzca el valor de v2: ");
    scanf( "%d", &v2);

    aux = v1;
    v1 = v2;
    v2 = aux;

    printf( "El nuevo valor de v1 es: %d\n", v1 );
    printf( "El nuevo valor de v2 es: %d\n", v2 );

    return 0;
}
