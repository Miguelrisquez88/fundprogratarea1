/*mickelle risquez 23.858.883 seccion 3*/

/*Ejercicio 3: Suponiendo que el kilo de az�car y de caf� est�n a 3$ y 0.72$ respectivamente, escribir
en lenguaje C un programa que:
1�) Pida por teclado una cantidad (dato real) en euros.
2�) Si la mitad de la cantidad introducida se destina a comprar az�car, una tercera parte a comprar
caf�, y el resto no se gasta. Calcule cu�ntos kilos de az�car y caf� (datos reales) se pueden comprar
con dicha cantidad de dinero, as� como la cantidad (dato real) de dinero sobrante.
3�) Muestre por pantalla los resultados (datos reales).*/

#include <stdio.h>

int main()
{
    float cantidad, azucar_k, cafe_k;

    printf( "Introduzca la cantidad: ");
    scanf( "%f", &cantidad );

    azucar_k = cantidad / 2 / 3;
    cafe_k = cantidad / 3 / 0.72;
    cantidad = cantidad / 6;0;

    printf("%.2f kilos de azucar\n", azucar_k);
    printf("%.2f kilos de cafe\n", cafe_k);
    printf("%.2f dolares sobrantes", cantidad);

    return 0;
}
