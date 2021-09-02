//11.	Escrever seu nome na tela 10 vezes. Um nome por linha.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	char nome[20];

	printf ("Digite o seu nome:  ");
	scanf ("%s",nome);

	for (int i =0; i<10; i++) {
		printf ("\n%d. Seu nome é %s",i+1,nome);
	}
}
