//8.O coordenador do curso deseja saber a maior nota de cada aluno.
//Sabendo-se que eles têm duas disciplinas - Algoritmos II e Projeto Integrador, faça um algoritmo que
//leia as notas as duas disciplinas e retorne em qual disciplina o aluno obteve a maior nota.
//Considere que a turma possui 42 alunos.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	char nome[50];
	int nota1,nota2,num = 1;

	while (num != 0) {
		printf ("Qual o nome do aluno ?  ");
		scanf ("%s",nome);
		printf ("Qual a Nota de %s em Algoritmos II ?   ",nome);
		scanf ("%d",&nota1);
		printf ("Qual a Nota de %s em Projeto Integrador ?   ",nome);
		scanf ("%d",&nota2);

		if (nota1 < nota2) {
			printf ("A nota de Projeto integrador (%d) foi maior que a de Algoritmos (%d)",nota2,nota1);
			printf ("\nAperte 1 para continuar, 0 para finalizar o programa : ");
			scanf ("%d",&num);
		}
		if (nota1 > nota2) {
			printf ("A nota de Algoritmos (%d) foi maior que a de Projeto Integrador (%d)",nota1,nota2);
			printf ("\nAperte 1 para continuar, 0 para finalizar o programa : ");
			scanf ("%d",&num);
		}
		if (nota1 == nota2) {
			printf ("As duas notas foram iguais !");
			printf ("\nAperte 1 para continuar, 0 para finalizar o programa : ");
			scanf ("%d",&num);
		}
	}

	printf ("Programa Finalizado ! ");

}
