/*
 Faça um algoritmo que leia os valores A, B, C e diga se a soma de A + B é menor, 
maior ou igual a C. 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int valores[3], soma;
    int c = 0;

    printf("Digite os 3 valores A, B e C, em sequencia");

    for (c; c < 3; c++) {
        printf("\n: ");
        scanf("%i", &valores[c]);
    }

    soma = valores[0] + valores[1];

    if (soma < valores[2]) {
        printf("\nA soma A + B (%i) eh menor que o valor C (%i)", soma, valores[2]);
    } if (soma > valores[2]) {
        printf("\nA soma A + B (%i) eh maior que o valor C: (%i)", soma, valores[2]);
    } else {
        printf("\nA soma A + B eh igual a C: %i", valores[3]);
    }

    printf("\n");
    system("pause");

return 0; }
// SIM! É O EXERCICIO 2, REPETIDO NO EXERCICIO 5!!!.
// aiai...