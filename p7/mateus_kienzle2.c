/* Programa que monta um jogo simples de adivinhar um número inteiro sorteado pelo
computador. O computador irá sortear um número inteiro no intervalo [1,10]. Após o sorteio o
usuário tentará adivinhar o número que foi sorteado. Caso o usuário acerte o número em menos de 5
tentativas, o programa imprime a mensagem: “Parabéns! Você acertou o número em XX tentativas”
(XX corresponde ao número de tentativas). Caso o usuário não acertou, o programa deverá
comparar o número sorteado com o número fornecido pelo usuário e imprimir uma mensagem
adequada de acordo se o número for maior ou menor do que o valor sorteado. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tentativas 5
#define MIN 1
#define MAX 10

int main()
{
   int contador=0, computador;   //declaração da variável contadora resultante e do número aleatório do computador(inteiras)
   int chute;                    //declaração da variável informada (inteiras)

    srand(time(NULL));

// Seleção do valor aleatório do computador
    computador = MIN + (rand()%(MAX-MIN+1));

// Laço que verifica se o chute informado pelo usuário é igual ao número aleatório do computador e se o número de tentativas
// é menor que o número limite de tentativas (5).
   do{
        printf("Digite seu chute: ");
        scanf("%d", &chute);
        contador++;
        if (chute > computador){
            printf("Seu chute eh maior do que o valor sorteado pelo computador!\n\n");
        }
        if (chute < computador){
            printf("Seu chute eh menor do que o valor sorteado pelo computador!\n\n");
        }

   } while (contador < tentativas && chute != computador);

// Mensagens do programa para o usuário, informando se ele acertou o chute com menos de 5 tentativas ou se ele não acertou.
   if (contador == tentativas && chute != computador){
        printf("Voce ultrapassou o numero maximo de tentativas!\n");
   }
    else (printf("\nParabens! Voce acertou em %d tentativa(s)!\n", contador));

    return 0;
}



