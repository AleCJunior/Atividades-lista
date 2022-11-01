/*
 O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicado ao custo de fábrica).
Supondo que a percentagem do distribuidor seja de 12% e os impostos de 45%, elabore um algoritmo para ler o custo de fábrica do carro e imprimir o custo ao consumidor.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	//Declaracao da variavel e zerando
	float v_fabrica, v_final, v_imposto = 0;
	int i = 0;
	
	printf("Insira o valor de custo de fabrica do carro: R$");
	scanf("%f", &v_fabrica);

	v_imposto = (v_fabrica * 0.45) + v_fabrica;
	v_final = (v_fabrica * 0.12) + v_imposto;
	 
	printf("\nO valor do carro pro consumidor eh: R$%.2f\n\n", v_final);
	
	system("pause");
return 0; }