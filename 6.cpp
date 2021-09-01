//6.	Elabore um algoritmo que leia dois vetores (A e B) de 5 posições e os preencha com valores inteiros. 
//Mostre os números e armazene a soma de A[n]+B[n] em um vetor C.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int i, vetA[5],vetB[5],vetC[5];
	
	for (i=0; i<5; i++) {
		printf ("Digite o %d° valor do Vetor A: ",i+1);
		scanf ("%d",&vetA[i]);	
	}
	printf ("----------------------------------------\n");
	for (i=0; i<5; i++) {
		
		printf ("Digite o %d° valor do Vetor B: ",i+1);
		scanf ("%d",&vetB[i]);	
	}
	printf ("----------------------------------------\n");
	for (i=0; i<5; i++) {
		vetC[i] = vetA[i] + vetB[i];
		printf ("\n%d° Posição do Vetor C : %d (%d + %d)",i+1,vetC[i],vetA[i],vetB[i]);
	}
}
