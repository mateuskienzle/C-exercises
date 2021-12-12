/* Programa que monta uma matriz de dimens�o 4x4 com n�meros aleat�rios no intervalo [2,40] e imprime
a a matriz obtida na tela em formato de matriz. O programa tamb�m monta dois arranjos unidimensionais
a partir da matriz gerada, em que um arranjo apresenta os maiores elementos de cada coluna e o outro
arranjo apresenta os menores elementos de cada linha. Ap�s montar os arranjos, o programa imprime eles. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linhas 4
#define colunas 4
#define MIN 2
#define MAX 40

int main()
{
   int i, j, contador=0, maior_num=0, menor_num=0;                     //declara��o das vari�veis contadoras resultantes (inteiras)
   int matriz[linhas][colunas], arranjo_maior[3], arranjo_menor[3];    //declara��o das vari�veis array resultantes (inteiras)

    srand(time(NULL));

// Sele��o dos valores aleat�rios para compor a matriz
   for(i=0; i < linhas; i++){
        for(j=0; j<colunas; j++){
            matriz[i][j] = MIN + (rand()%(MAX-MIN+1));
        }
   }
// Montagem da matriz com os valores aleat�rios selecionados
   printf("Matriz:\n\n");
   for(i=0; i < linhas; i++){
       for(j=0; j < colunas; j++){
            printf("%5d", matriz[i][j]);
        }
        printf("\n");
   }

// Sele��o dos maiores valores de cada coluna
   i=0;
   j=0;

   printf("\nArranjo maiores elementos colunas:\n");

    for(j=0; j < colunas; j++){
        contador = 0;
        for(i=0; i < linhas; i++){
            contador++;
            if (contador == 1){
                maior_num = matriz[i][j];
            }
            else {
                if (matriz[i][j] > maior_num){
                    maior_num = matriz[i][j];
                }
            }
        }
        arranjo_maior[i] = maior_num;
        printf("%d ", arranjo_maior[i]);
    }

// Sele��o dos menores valores de cada linha
   i=0;
   j=0;

   printf("\n\nArranjo menores elementos linhas:\n");

    for(i=0; i < linhas; i++){
        contador = 0;
        for(j=0; j < colunas; j++){
            contador++;
            if (contador == 1){
                menor_num = matriz[i][j];
            }
            else {
                if (matriz[i][j]< menor_num){
                    menor_num = matriz[i][j];
                }
            }
        }
        arranjo_menor[j] = menor_num;
        printf("%d ", arranjo_menor[j]);
    }
    printf("\n");

    return 0;
}



