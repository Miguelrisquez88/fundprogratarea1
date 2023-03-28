/*mickelle risquez 23.858.883 seccion 3*/

/*Ejercicio 4: Escribir en lenguaje C un programa que:
1º) Pida por teclado una hora en horas, minutos y segundos (datos enteros).
2º) Calcule cuántos segundos han pasado desde las 0:0:0 horas.
3º) Muestre por pantalla el resultado (dato entero).*/

#include <stdio.h>

int main()
{
    int horas,minutos,segundos,total_segundos;

    printf( "Introduzca las horas: " );
    scanf( "%d", &horas );
    printf( "Introduzca los minutos: " );
    scanf( "%d", &minutos );
    printf( "Introduzca los segundos: " );
    scanf( "%d", &segundos );

    total_segundos = horas * 3600 + minutos * 60 + segundos;
    
    printf( "Han pasado %d segundos desde 0:0:0 horas.", total_segundos);

    return 0;
}

