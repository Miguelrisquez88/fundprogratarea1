/*mickelle risquez 23.858.883 seccion 3*/

/*Ejercicio 1: Escribir en lenguaje C un programa que:
1�) Pida por teclado la nota de tres ex�menes (datos reales).
2�) Calcule la nota media de los tres ex�menes.
3�) Muestre por pantalla el resultado (dato real).*/

#include <stdio.h>

int main(){
	
	float n1,n2,n3;
	float media_examenes;
	
	printf("Ingrese la nota del primer examen: ");
	scanf("%f",&n1);
	printf("Ingrese la nota del segundo examen: ");
	scanf("%f",&n2);
	printf("Ingrese la nota del tercer examen: ");
	scanf("%f",&n3);
	
	media_examenes = (n1+n2+n3) / 3;
	
	printf("El pomedio de las tres notas es: %.2f",media_examenes);
	
	return 0;
}




