//7.Elabore um algoritmo que leia valores em oito posi��es. Ap�s a leitura, solicitar um n�mero do teclado.
//Pesquisar se este n�mero existe no vetor. Se existir, imprimir em qual posi��o do vetor ela est�.
//Se n�o existir,imprimir a mensagem que n�o existe.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	int i, vet[8],pro ,posi = 0,real;

	for (i=0; i<8; i++) {
		printf ("Digite o %d � Valor do vetor: ",i+1);
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
		printf ("O n�mero %d est� na posi��o %d .", pro, posi+1);
	} else {
		printf ("Esse n�mero n�o existe no vetor. ");
	}
}

