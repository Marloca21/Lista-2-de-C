//13.	Criar um algoritmo que leia os elementos de uma matriz inteira 10 x 10 e escreva todos os elementos,
//exceto os elementos da diagonal principal.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	int lin,col, tab;
	int mat[10][10];

	for (lin = 0; lin < 10; lin++) {
		for (col = 0; col < 10; col++) {
			printf ("Digite ELEMENTO da linha %d, coluna %d da matriz: ",lin+1,col+1);
			scanf ("%d", &mat[lin][col]);
		}
	}

	printf("\nMatriz\n");
	for (lin = 0; lin < 10; lin++) {
		for (col = 0; col < 10; col++)
			printf("%d\t",mat[lin][col]);
		printf("\n\n");
	}


	printf ("\n\nMatriz menos a diagonal principal\n\n");
	for (lin=0; lin<10; lin++) {
		for (col=0; col<10; col++) {
			if (lin != col) {
			printf("%d",mat[lin][col]);
		}
			printf("\t");
		}
		printf("\n");
	}

}
