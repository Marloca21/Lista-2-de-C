//9.A s�rie de Fibonacci � formada pela sequ�ncia:      1, 1, 2, 3, 5, 8, 13, 21, 34, 55,  ...
//Escreva um algoritmo que armazene em um vetor os 50 primeiros termos da s�rie de FIBONACCI.
//Ap�s isso, o algoritmo deve imprimir todos os valores armazenados.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	int i;
	double vet[50];

	vet[0] = vet[1] = 1;

	for (i = 2 ; i < 50 ; i++) {
		vet[i] = vet[i-1] + vet[i-2];
	}
	printf("Os 50 n�meros s�o:\n");
	printf("%.lf",vet[0]);
	for (i = 1 ; i < 50 ; i++) {
		printf("\n%.lf",vet[i]);
	}
}



