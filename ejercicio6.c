/*mickelle risquez 23.858.883 seccion 3*/

/*Ejercicio 6: Escribir en lenguaje C un programa que:
1º) Pida por teclado una cantidad (dato entero) en dolares.
2º) Calcule su equivalente en euros.
3º) Muestre por pantalla el resultado (dato real).
Nota: 1 euro = 166,386 dolares.*/

#include <stdio.h>

int main()
{
    int dolares;
    float euros;

    printf("Introduzca cantidad en dolares: ");
    scanf( "%d", &dolares );

    euros = dolares / 166.386;

    printf("Son: %.2f euros\n", euros);

    return 0;
}
