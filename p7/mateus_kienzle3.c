/* Programa que l� um inteiro N no intervalo [3, 9] e gera uma matriz quadrada de dimens�o NxN com
elementos aleat�rios no intervalo [1, 30]. Ap�s a gera��o da matriz o programa imprime na tela a
matriz gerada e calcula e imprime o elemento minimax (o menor elemento da linha em que se encontra
o maior elemento da matriz)*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 9
#define MIN 1
#define MAX 30

int main()
{
   int N;                                                  //declara��o da vari�vel contadora informada (inteira)
   int i, j, contador=0, linhas=0, colunas=0, minmax=0;    //declara��o das vari�veis contadoras resultantes (inteiras)
   int matriz[DIM][DIM], maior_linha=0, maior_elemento=0;  //declara��o das vari�veis array, elemento e linha resultantes (inteiras)

    srand(time(NULL));

 // Valida��o do valor N inserido pelo usu�rio para determinar a dimens�o da matriz
    do{
        printf("Entre com a dimensao da matriz: ");
        scanf("%d", &N);
    } while (N < 3 || N > 9);

    linhas = N;
    colunas = N;

// Sele��o dos valores aleat�rios para compor a matriz
   for(i=0; i < linhas; i++){
        for(j=0; j<colunas; j++){
            matriz[i][j] = MIN + (rand()%(MAX-MIN+1));
        }
   }

// Montagem da matriz de dimens�o NxN com os valores aleat�rios selecionados
   printf("\nMatriz:\n\n");
   for(i=0; i < linhas; i++){
       for(j=0; j < colunas; j++){
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
   }

// Sele��o do maior elemento da matriz
   maior_elemento = matriz[0][0];

    for(i=0; i < linhas; i++){
        for(j=0; j < colunas; j++){
           if(matriz[i][j] > maior_elemento) {
                maior_elemento = matriz[i][j];
                maior_linha = i;
           }
        }
    }
// Sele��o do elemento minimax da matriz
    minmax = matriz[maior_linha][0];

    for(j=1; j < colunas; j++){
        if(matriz[maior_linha][j] < minmax){
            minmax = matriz[maior_linha][j];
        }
    }

    printf("\nO elemento minimax da matriz vale: %d\n", minmax);

    return 0;
}
