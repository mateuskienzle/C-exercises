/* Programa que apresenta na tela a média e o conceito de um aluno numa disciplina.
O programa le 4 provas mensais no valor máximo de 20 pontos e uma prova final
no valor máximo de 40 pontos. Além disso, o programa pergunta se o usuário deseja
calcular o conceito para outro aluno. */


#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include <stdlib.h>

// função que calcula a média e o conceito do aluno
char media_conceito(int notas[], int *media){

     int nota_menor, nota_media;     //declaração das variáveis locais resultantes (inteiras)
     int i=0, nota_total=0;          //declaração das variáveis locais contadoras resultantes (inteiras)
     char conceito;                 //declaração da variável local resultante (caractere)

     nota_menor = notas[0];

     for(i = 0; i < 4; i++){
        if(notas[i] < nota_menor){
            nota_menor = notas[i];
         }
     }

     for(i = 0; i < 5; i++){
        nota_total = nota_total + notas[i];
     }

     nota_media = (nota_total - nota_menor);
     *media = nota_media;

     if(nota_media >= 85 && nota_media <= 100){
        conceito = 'A';
     }

     else if(nota_media >= 70 && nota_media <= 84){
        conceito = 'B';
     }

     else if(nota_media >= 50 && nota_media <= 69){
        conceito = 'C';
     }

     else if(nota_media >= 0 && nota_media <= 50){
        conceito = 'D';
     }

 return conceito;

}

// função que realiza a pergunta para o usuário se quer ler mais notas para calcular média e conceito
 char le_s_n(void){

     char resposta;     //declaração da variável local inserida (caractere)

     do{
        printf("Mais um (S/N)? ");
        scanf(" %c", &resposta);
        resposta = toupper(resposta);
        if(resposta != 'S' && resposta != 'N'){
           printf("Resposta invalida!\n ");
        }
     }while(resposta != 'S' && resposta != 'N');

 return resposta;

}

// programa principal
int main(void){

    int notas[5];               //declaração das variáveis locais  inseridas (inteiras)
    int i, media;               //declaração das variáveis locais contadoras resultantes (inteiras)
    char retorno_1,retorno_2;   //declaração das variáveis locais que recebem os resultados da outras funções (caracteres)

    do{
        printf("Entre com as 5 notas (4 provas mensais e uma prova final): ");
        for(i = 0; i < 5; i++){
            scanf("%d", &notas[i]);
        }
        retorno_1 = media_conceito (notas, &media);
        printf("Sua media eh %d e seu conceito eh %c.\n", media, retorno_1);
        retorno_2 = le_s_n();
    }while(retorno_2 != 'N');

     printf("\nPrograma encerrado. \n");

     return 0;

}
