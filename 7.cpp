//7.Elabore um algoritmo que leia valores em oito posições. Após a leitura, solicitar um número do teclado.
//Pesquisar se este número existe no vetor. Se existir, imprimir em qual posição do vetor ela está.
//Se não existir,imprimir a mensagem que não existe.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	int i, vet[8],pro ,posi = 0,real;

	for (i=0; i<8; i++) {
		printf ("Digite o %d ° Valor do vetor: ",i+1);
		scanf ("%d",&vet[i]);
	}

	printf ("Digite um valor para ser pesquisado : ");
	scanf ("%d",&pro);

	for (i=0; i<8; i++) {
		if (pro == vet[i]) {
			posi = i;
		}
	}

	if (posi != 0) {
		printf ("O número %d está na posição %d .", pro, posi+1);
	} else {
		printf ("Esse número não existe no vetor. ");
	}
}

