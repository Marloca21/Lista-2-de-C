//1.	Crie um programa que leia um n�mero do teclado at� que encontre um n�mero igual a zero.
//No final, mostre a soma dos n�meros digitados.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	int num, soma;
	soma = 0;

	printf ("Digite um n�mero, 0 para parar: ");
	scanf ("%d",&num);
	while (num != 0 ) {
		soma = num + soma ;
		printf ("Digite um n�mero, 0 para parar: ");
		scanf ("%d",&num);
	}

	printf ("A soma dos n�meros � %d .", soma);
}
