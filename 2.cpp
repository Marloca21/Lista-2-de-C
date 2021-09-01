//2.Escreva um algoritmo que leia um número do teclado até que encontre um número menor ou igual a 1.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	int num;

	printf ("Digite um número, 1 para parar: ");
	scanf ("%d",&num);
	while (num > 1 && num != 1) {
		printf ("Digite um número, 1 para parar: ");
		scanf ("%d",&num);
	}

	printf ("Programa Encerrado. ");
}
