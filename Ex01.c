/*
O cardápio de uma casa de hamburger é dado abaixo. Preparar um algoritmo para 
ler a quantidade de cada item comprado e calcular a conta final.
Mona’sburguer 	Valor Unitário
Hambúrguer      R$ 3.50 
Cheeseburger    R$ 4.50 
Batata frita    R$ 5.00 
Refrigerante    R$ 1.50 
Milk-shake      R$ 2.80 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int hamburguer, cheeseburguer, bfrita, refrigerante, milkshake = 0;
	float preco[5] = {3.50, 4.50, 5.00, 1.50, 2.80};
	float vt[5];

	printf("\nCardapio do Mona's Burguer\n\n" );
	printf("Hamburguer R$3,50\n");
	printf("Digite a quantidade de hamburguer que voce vai comprar:\n");
	scanf("%i", &hamburguer); 

	vt[0] = hamburguer * preco[0];

	printf("\nCheeseburguer R$4,50\n");
	printf("Digite a quantidade de chessseburguer que voce vai comprar:\n");
	scanf("%i", &cheeseburguer); 

	vt[1] = (cheeseburguer * preco[1]) + vt[0];

	printf("\nBatata Frita R$ 5,00\n");
	printf("Digite a quantidade de batata frita que voce vai comprar:\n");
	scanf("%i", &bfrita); 

	vt[2] = (bfrita * preco[2]) + vt[1];

	printf("\nRefrigerante R$ 1,50\n");
	printf("Digite a quantidade de refrigerante que voce vai comprar:\n");
	scanf("%i", &refrigerante); 

	vt[3] = (refrigerante * preco[3]) + vt[2];

	printf("\nMilk-shake R$ 2,80\n");
	printf("Digite a quantidade de milk-shake que voce vai comprar:\n");
	scanf("%i", &milkshake); 

	vt[4] = (milkshake * preco[4]) + vt[3];

	printf("\n\nValor Total equivale a R$%.2f\n\n", vt[4]);
	system("pause");

return 0; }