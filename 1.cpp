//1.	Crie um programa que leia um número do teclado até que encontre um número igual a zero.
//No final, mostre a soma dos números digitados.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	int num, soma;
	soma = 0;

	printf ("Digite um número, 0 para parar: ");
	scanf ("%d",&num);
	while (num != 0 ) {
		soma = num + soma ;
		printf ("Digite um número, 0 para parar: ");
		scanf ("%d",&num);
	}

	printf ("A soma dos números é %d .", soma);
}
