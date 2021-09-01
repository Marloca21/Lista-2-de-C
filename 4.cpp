//4.	Escreva um algoritmo que armazene em um vetor todos os números de 100 até 1 (ordem decrescente)
//Após a leitura o programa deverá imprimir os valores lidos.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	int vet [100],i;

	for (i=100; i>0; i--) {

		vet[i] = i ;
	}

	for (i=100; i>0; i--) {
		printf ("\n%d ",vet[i]);
	}
}
