//12.Criar um algoritmo que leia os elementos de uma matriz inteira 4 x 4 e
//escreva os elementos da diagonal principal.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	int lin,col, tab;
	int mat[4][4];

	for (lin = 0; lin < 4; lin++) {
		for (col = 0; col < 4; col++) {
			printf ("Digite ELEMENTO da linha %d, coluna %d da matriz: ",lin+1,col+1);
			scanf ("%d", &mat[lin][col]);
		}
	}

	printf("\nMatriz\n");
	for (lin = 0; lin < 4; lin++) {
		for (col = 0; col < 4; col++)
			printf("%d\t",mat[lin][col]);
		printf("\n\n");
	}

	printf("\n\nDiagonal principal\n\n");
	for (lin = 0; lin < 4; lin++) {
		printf("%d\n",mat[lin][lin]);
		for (tab=1; tab<=lin+1; tab++)
			printf("\t");
	}
}
