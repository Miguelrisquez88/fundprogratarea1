/*mickelle risquez 23.858.883 seccion 3*/

/*Ejercicio 2: Escribir en lenguaje C un programa que:
1º) Pida por teclado la arista (dato real) de un cubo.
2º) Calcule el volumen del cubo.
3º) Muestre por pantalla el resultado (dato real).*/

#include <math.h>
#include <stdio.h>

int main(){
	
	float arista, volumen;
	
	printf("Introduzca la arista: ");
	scanf("%f",&arista);
	
	volumen = pow(arista, 3);
	
	printf("El volumen del cubo es: %.2f",volumen);
	
	return 0;
}

