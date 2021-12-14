/* Programa que apresenta na tela a m�dia e o conceito de um aluno numa disciplina.
O programa le 4 provas mensais no valor m�ximo de 20 pontos e uma prova final
no valor m�ximo de 40 pontos. Al�m disso, o programa pergunta se o usu�rio deseja
calcular o conceito para outro aluno. */


#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include <stdlib.h>

// fun��o que calcula a m�dia e o conceito do aluno
char media_conceito(int notas[], int *media){

     int nota_menor, nota_media;     //declara��o das vari�veis locais resultantes (inteiras)
     int i=0, nota_total=0;          //declara��o das vari�veis locais contadoras resultantes (inteiras)
     char conceito;                 //declara��o da vari�vel local resultante (caractere)

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

// fun��o que realiza a pergunta para o usu�rio se quer ler mais notas para calcular m�dia e conceito
 char le_s_n(void){

     char resposta;     //declara��o da vari�vel local inserida (caractere)

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

    int notas[5];               //declara��o das vari�veis locais  inseridas (inteiras)
    int i, media;               //declara��o das vari�veis locais contadoras resultantes (inteiras)
    char retorno_1,retorno_2;   //declara��o das vari�veis locais que recebem os resultados da outras fun��es (caracteres)

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
