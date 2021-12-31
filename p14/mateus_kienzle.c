/* Programa que le e imprime na tela o conteúdo de um arquivo texto fornecido. O programa le o arquivo texto,
imprime na tela, em formato de matriz, o conteúdo do arquivo texto, abre e grava em disco em formato texto o
conteúdo da matriz, e troca todas as ocorrências de um caracter informado pelo usuário para um novo caracter na matriz */


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

#define NLIN 11
#define NCOL 11

// função que abre e le o arquivo texto informado pelo usuário
int abre_le_arquivo(char m[NLIN][NCOL], char nome_arq[]){

    int i, j;                   // declaração das variáveis resultantes contadoras (inteiras)
    int retorno_le_arquivo;      // declaração da variável resultante (inteira)
    char temp;                   // declaração da variável resultante (caractere)

    FILE *arq;

    printf("Entre com o nome do arquivo: ");
    scanf("%s", nome_arq);

    if(! (arq = fopen(nome_arq, "r"))){
       retorno_le_arquivo = -1;
    }

    else{
        for(i = 0; i < NLIN; i++){
            for(j = 0; j < NCOL; j++){
                temp = getc(arq);
                if(temp != '\n'){
                    m[i][j] = temp;
                }
            }
         }
         printf("\n");
         fclose(arq);
         retorno_le_arquivo = 1;
    }
    return retorno_le_arquivo;
}

// função que imprimi os caractere do arquivo texto informado pelo usuário
void imprime_matriz_tela(char m[NLIN][NCOL]){

    int i, j;  // declaração das variáveis resultantes contadoras (inteiras)

    for(i = 0; i < NLIN; i++){
        for(j = 0; j < NCOL; j++){
            printf("%c", m[i][j]);
        }
        printf("\n");
     }
     printf("\n");
}

// função que grava o conteúdo do arquivo texto modificado em outro arquivo texto diferente
int abre_grava_arquivo(char m[NLIN][NCOL], char nome_arq[]){

    int i, j;                       // declaração das variáveis resultantes contadoras (inteiras)
    int retorno_grava_arquivo;     // declaração da variável resultante (inteira)

    FILE *arq;


    printf("Entre com o nome do arquivo: ");
    scanf("%s", nome_arq);

    if(! (arq = fopen(nome_arq, "w"))){
        printf("\nArquivo nao foi gravado, erro \n\n");
        retorno_grava_arquivo = -1;
    }

    else{
            for(i=0; i < NLIN; i++){
                putc('\n', arq);
                for(j=0; j < NCOL; j++){
                    putc(m[i][j], arq);
                }
            }
        putc(EOF, arq);
        rewind(arq);
        fclose(arq);
        printf("\n\n");
        retorno_grava_arquivo = 1;
    }
    return retorno_grava_arquivo;
}

// função que realiza a troca de caracteres dentro do arquivo texto
void troca_caracter(char m[NLIN][NCOL],char velho, char novo){

    int i, j;    // declaração das variáveis contadoras resultantes (inteiras)

    printf("Entre com o caractere antigo: ");
    scanf(" %c", &velho);
    printf("Entre com o novo caractere: ");
    scanf(" %c", &novo);

    for(i=0; i < NLIN; i++){
        for(j=0; j < NCOL; j++){
            if(m[i][j] == velho){
                m[i][j] = novo;
            }
        }
    }
    printf("\n\n");
}

// programa principal
int main(){

    int opcao, retorno;                                // declaração das variáveis resultantes (inteiras)
    char m[NLIN][NCOL], nome_arq[70], velho, novo;    //declaração das variáveis de entrada (caracteres)

    do{
        printf("1 - Le arquivo\n");
        printf("2 - Imprime matriz na tela\n");
        printf("3 - Troca caracter\n");
        printf("4 - Grava arquivo\n");
        printf("5 - Sair\n");
        printf("Entre com sua opcao: ");
        scanf("%d", &opcao);
        printf("\n");


        switch(opcao){
            case 1:
                retorno = abre_le_arquivo(m, nome_arq);

                if(retorno == -1)
                    printf("\nErro na leitura\n\n");
                else
                    printf("Arquivo lido com sucesso\n\n");
                break;
            case 2:
                imprime_matriz_tela(m);
                break;
            case 3:
                troca_caracter(m, velho, novo);
                break;

            case 4:
                abre_grava_arquivo(m, nome_arq);
                printf("Arquivo gravado com sucesso!\n\n");
                break;
        }
            if(opcao>5 || opcao<1){
                printf("Opcao digitada nao existe. Escolha de 1 a 5\n\n");
            }

    } while(opcao != 5);

    return 0;
}
