//5.	Elaborar um algoritmo que leia 5 valores e armazene-os em um vetor.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int vet [5],i;

	for (i=0; i<5; i++) {
		printf ("Digite o %d° valor : ",i+1);
		scanf ("%d",&vet[i]);
		
	}

	for (i=0; i<5; i++) {
		printf ("\n%d° Valor : %d ",i+1,vet[i]);
	}
	
}
