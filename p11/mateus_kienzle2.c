/* Programa que gera um vetor aleat�rio de 10 posi��es e recebe de entrada um valor x.
Se esse valor x for menor do que o menor elemento do vetor aleat�rio gerado, o programa
incluir� esse valor x dentro do vetor no lugar do menor numero que havia no vetor original.
Se o valor x n�o for menor do que o menor elemento do vetor, nada acontecer�.*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include <stdlib.h>
#include <time.h>

// fun��o que substitui o menor numero do vetor original, pelo n�mero x de entrada, caso o numero x seja menor do que o menor numero do vetor original
int substitui_menor (int vetor[10], int tam_vetor, int x)
{

    int i;          //declara��o da vari�vel local contadora (inteira)
    int menor_num;  //declara��o da vari�vel local resultante (inteira)

    tam_vetor = 10;
    menor_num = vetor[0];

    for(i = 0; i < tam_vetor; i++){
        if(vetor[i] < menor_num){
            menor_num = vetor[i];
        }
    }

    if (x < menor_num){
        for(i = 0; i < tam_vetor; i++){
            if(vetor[i] == menor_num){
                vetor[i] = x;
            }
        }
        return 1;
    }

    else {
        return 0;
    }
}

// programa principal
int main (void)
{
    int i;                             //declara��o da vari�vel local contadora (inteira)
    int MIN = 0, MAX = 100;            //declara��o das vari�veis locais que estipulam os limites dos numeros (inteiras)
    int vetor[10], tam_vetor = 10, x;  //declara��o das vari�veis locais de entrada (inteiras)
    int resultado, numero_aleatorio;   //declara��o das vari�veis locais resultantes (inteiras)

    srand(time(NULL));

    printf("Vetor gerado: \n");
    for(i = 0; i < tam_vetor; i++){
        numero_aleatorio = MIN + (rand()%(MAX-MIN+1));
        vetor[i] = numero_aleatorio;
        printf("%d ", vetor[i]);
    }
    printf("\n\nEntre com o valor de x: ");
    scanf("%d", &x);
    resultado = substitui_menor(vetor, tam_vetor, x);

    if (resultado == 1) {
        printf("\nFoi feita a troca!\n");
        for(i = 0; i < tam_vetor; i++){
            printf("%d ", vetor[i]);
        }
    }

    else if (resultado == 0) {
        printf("\nNao foi feita a troca!\n");
        for(i = 0; i < tam_vetor; i++){
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");
}
