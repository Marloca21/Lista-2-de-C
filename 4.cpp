//4.	Escreva um algoritmo que armazene em um vetor todos os n�meros de 100 at� 1 (ordem decrescente)
//Ap�s a leitura o programa dever� imprimir os valores lidos.

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
