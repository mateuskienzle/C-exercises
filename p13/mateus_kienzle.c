/* programa que l� os dados de estudantes do ensino m�dio que prestaram ENEM (nome do aluno, idade e m�dia final).
O programar ir� ler os dados e armazen�-los num arquivo bin�rio cujo nome ser� lido do usu�rio. O
programa deve parar de ler dados quando o usu�rio digitar a string �sair� para o nome do aluno.
O programa solicita ao usu�rio uma m�dia qualquer, e lista o nome e m�dia de todos os alunos que tiveram m�dia
maior ou igual � m�dia informada. Ainda deve informar a idade m�dia de todos os alunos que
prestaram ENEM.*/


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define TAM 60

// declara��o global da estrutura aluno
typedef struct aluno{
 int idade, media;
 char nome[60];
}ALUNO;

// programa principal
int main(void){

     ALUNO aluno;
     FILE *arq;

     int idade_total=0, i=0;    // declara��o das vari�veis resultantes (inteiras)
     int media_busca=0;        //declara��o da vari�vel de entrada (inteira)
     float idade_media = 0;    //declara��o da vari�vel  resultante (n�o inteira)
     char nome_arq[60];       //declara��o da vari�vel de entrada (caractere)

     printf("Entre com o nome do arquivo: ");
     fflush(stdin);
     fgets(nome_arq, TAM+1, stdin);
     nome_arq[strlen(nome_arq)-1] = '\0';
     printf("\n");

     if(!(arq = fopen (nome_arq, "w+b"))){
        printf("Erro de cricao do arquivo \n");
     }

     else{

        do{
           printf("Nome: ");
           fflush(stdin);
           fgets(aluno.nome, TAM+1, stdin);
           aluno.nome[strlen(aluno.nome)-1] = '\0';

           if(strcmp(aluno.nome, "sair")){
              printf("Idade: ");
              scanf("%d", &aluno.idade);
              printf("Media: ");
              scanf("%d", &aluno.media);
              i++;
              printf("\n");

              if(fwrite (&aluno, sizeof(ALUNO), 1, arq)!= 1){
                 printf("Erro de escrita! \n");
              }
           }
        } while(strcmp(aluno.nome, "sair"));

        if(i!= 0){
           printf("\nEntre com a media para a busca: ");
           scanf("%d", &media_busca);
           printf("\nLista de todos os alunos com media maior ou igual a %d: \n", media_busca);
           rewind(arq);

           while(!feof(arq)){

              if(fread(&aluno, sizeof(ALUNO), 1, arq) == 1){

                 if(aluno.media >= media_busca){
                    printf("Nome: %s, media: %d \n", aluno.nome, aluno.media);
                 }

              idade_total = idade_total + aluno.idade;
              idade_media = (float)idade_total/i;
              }
           }
           printf("Idade media de todos os alunos: %.2f \n", idade_media);
        }
        else {
            printf("\nNenhum aluno foi cadastrado! \n");
        }
     }

     fclose(arq);

     return 0;
}
