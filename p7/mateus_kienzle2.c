/* Programa que monta um jogo simples de adivinhar um n�mero inteiro sorteado pelo
computador. O computador ir� sortear um n�mero inteiro no intervalo [1,10]. Ap�s o sorteio o
usu�rio tentar� adivinhar o n�mero que foi sorteado. Caso o usu�rio acerte o n�mero em menos de 5
tentativas, o programa imprime a mensagem: �Parab�ns! Voc� acertou o n�mero em XX tentativas�
(XX corresponde ao n�mero de tentativas). Caso o usu�rio n�o acertou, o programa dever�
comparar o n�mero sorteado com o n�mero fornecido pelo usu�rio e imprimir uma mensagem
adequada de acordo se o n�mero for maior ou menor do que o valor sorteado. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tentativas 5
#define MIN 1
#define MAX 10

int main()
{
   int contador=0, computador;   //declara��o da vari�vel contadora resultante e do n�mero aleat�rio do computador(inteiras)
   int chute;                    //declara��o da vari�vel informada (inteiras)

    srand(time(NULL));

// Sele��o do valor aleat�rio do computador
    computador = MIN + (rand()%(MAX-MIN+1));

// La�o que verifica se o chute informado pelo usu�rio � igual ao n�mero aleat�rio do computador e se o n�mero de tentativas
// � menor que o n�mero limite de tentativas (5).
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

// Mensagens do programa para o usu�rio, informando se ele acertou o chute com menos de 5 tentativas ou se ele n�o acertou.
   if (contador == tentativas && chute != computador){
        printf("Voce ultrapassou o numero maximo de tentativas!\n");
   }
    else (printf("\nParabens! Voce acertou em %d tentativa(s)!\n", contador));

    return 0;
}



