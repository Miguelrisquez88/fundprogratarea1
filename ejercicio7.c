/*mickelle risquez 23.858.883 seccion 3*/

/*Ejercicio 7: Escribir en lenguaje C un programa que:
1�) Pida por teclado un n�mero (dato entero).
2�) Muestre por pantalla:
� "ES PAR", en el caso de que el n�mero sea divisible entre 2.
� "ES IMPAR", en el caso de que el n�mero no sea divisible entre 2.*/

#include <stdio.h>

int main()
{
    int num;

    printf("Introduzca un numero entero: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("ES PAR");
    else
        printf("ES IMPAR");

    return 0;
}
