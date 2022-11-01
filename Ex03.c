/*
Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais 
deverá somar os dois, caso contrário multiplique o maior pelo menor ao final do 
calculo atribuir o valor para uma variável C.

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c = 0;

	//Prints e scanf	
	printf("Digite o valor A: ");
	scanf("%i", &a);
	printf("\nDigite o valor B: ");
	scanf("%i", &b);
	
	//if para a logica
 	if(a == b){
 		c = a + b; 
	 } else if(a > b) {
		 c = a * b;
	 } else {
		 c = b * a;
	 }
	 
	printf("\nO valor de C eh: %i \n", c);
	
	return 0; }