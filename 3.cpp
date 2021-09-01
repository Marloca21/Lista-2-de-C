//3.Elaborar um algoritmo que armazene o intervalo de 0 a 99 e armazene em um vetor.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	int vet [99],i;

	for (i=0; i<99; i++) {

		vet [i] = i ;
	}

	for (i=0; i<99; i++) {
		printf ("\n%d ",vet[i]);
	}
}
