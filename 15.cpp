//Criar um algoritmo que leia os elementos de uma matriz inteira 10 x 10 e escreva somente os 
//elementos abaixo da diagonal principal

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
    int lin, col, mat[10][10];

    for (lin = 0; lin < 10; lin++) {
		for (col = 0; col < 10; col++) {
			printf ("Digite ELEMENTO da linha %d, coluna %d da matriz: ",lin+1,col+1);
			scanf ("%d", &mat[lin][col]);
		}
	}

    printf("\n\nMatriz gerada:\n");
    for(lin = 0; lin < 10; lin++){
        for(col = 0; col < 10; col++)
            printf("%2d ", mat[lin][col]);
        printf("\n");
    }

    printf("\n\nAbaixo da diagonal principal:\n");
    for(lin = 0; lin < 10; lin++){
        for(col = 0; col < 10; col++){
            if(lin > col)
                printf("%2d ", mat[lin][col]);
            else
                printf("   ");
        }
        printf("\n");
    }
    printf("\n\n");

    return 0;
}
