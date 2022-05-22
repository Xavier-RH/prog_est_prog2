/* Autor: Xavier Romero Hernández, Realizado: 03/02/2022 
	Convertir grados celsius a fahrenheit
	*/
	
#include <stdio.h>


int main (){
	float fahrenheit, celsius;
	
	printf("Convertir celsius a fahrenheit\n");
	printf("introduce los grados celsius: ");
	scanf("%f",&celsius);
	
	fahrenheit=((9.0/5)*celsius)+32;
	
	printf("\n %.2f° celsius son %.2f° fahrenheit",celsius,fahrenheit);
	
	return 0;
}
