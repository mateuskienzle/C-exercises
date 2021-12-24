/* Programa que gera um vetor aleatório de 10 posições e recebe de entrada um valor x.
Se esse valor x for menor do que o menor elemento do vetor aleatório gerado, o programa
incluirá esse valor x dentro do vetor no lugar do menor numero que havia no vetor original.
Se o valor x não for menor do que o menor elemento do vetor, nada acontecerá.*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include <stdlib.h>
#include <time.h>

// função que substitui o menor numero do vetor original, pelo número x de entrada, caso o numero x seja menor do que o menor numero do vetor original
int substitui_menor (int vetor[10], int tam_vetor, int x)
{

    int i;          //declaração da variável local contadora (inteira)
    int menor_num;  //declaração da variável local resultante (inteira)

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
    int i;                             //declaração da variável local contadora (inteira)
    int MIN = 0, MAX = 100;            //declaração das variáveis locais que estipulam os limites dos numeros (inteiras)
    int vetor[10], tam_vetor = 10, x;  //declaração das variáveis locais de entrada (inteiras)
    int resultado, numero_aleatorio;   //declaração das variáveis locais resultantes (inteiras)

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
