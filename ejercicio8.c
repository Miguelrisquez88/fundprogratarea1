/*mickelle risquez 23.858.883 seccion 3*/

/*Ejercicio 8: Escribir en lenguaje C un programa que:
1º) Pida por teclado tres números (datos enteros).
2º) Muestre el mayor de los tres números introducidos.*/

#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf("Introduzca el primer numero: ");
    scanf( "%d", &n1 );
    printf("Introduzca el segundo numero: ");
    scanf( "%d", &n2 );
    printf("Introduzca el tercer numero: ");
    scanf( "%d", &n3 );

    if ( n1 >= n2 && n1 >= n3 )
        printf( "%d es el mayor.", n1 );
    else

        if ( n2 > n3 )
            printf( "%d es el mayor.", n2 );
        else
            printf( "%d es el mayor.", n3 );
 
    return 0;
}
