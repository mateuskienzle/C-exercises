/* Programa que lê uma string do usuário e imprime na tela o número de
ocorrências de cada uma das vogais */

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include <stdlib.h>

#define TAM 99

// função que calcula o numero de vezes que cada vogal aparece no texto de entrada
void conta_vogais(char texto[], int num_vogais[5])
{
    int j=0;                                 //declaração da variável local contadora (inteira)
    int a = 0, e = 0, i = 0, o = 0, u = 0;   //declaração das variáveis locais contadoras de vogais (inteiras)

    for (j=0;j <= strlen(texto);j++){


        if (toupper(texto[j]) == 'A'){
            a++;
            num_vogais[0] = a;
        }
        else if (toupper(texto[j]) == 'E'){
            e++;
            num_vogais[1] = e;
        }
        else if (toupper(texto[j]) == 'I'){
            i++;
            num_vogais[2] = i;
        }
        else if  (toupper(texto[j]) == 'O'){
            o++;
            num_vogais[3] = o;
        }
        else if  (toupper(texto[j]) == 'U'){
            u++;
            num_vogais[4] = u;
        }
    }
}

// programa principal
int main(void){

    int num_vogais[5] = {0};   //declaração da variável local resultante (inteira)
    char texto[TAM + 1];       //declaração da variável local de entrada (caractere)

    printf("Entre com o texto: ");
    fgets(texto, TAM+1, stdin);
    texto[strlen(texto)-1] = '\0';

    conta_vogais(texto, num_vogais);

    printf("\nA vogal a aparece %d vez(es)", num_vogais[0]);
    printf("\nA vogal e aparece %d vez(es)", num_vogais[1]);
    printf("\nA vogal i aparece %d vez(es)", num_vogais[2]);
    printf("\nA vogal o aparece %d vez(es)", num_vogais[3]);
    printf("\nA vogal u aparece %d vez(es)\n", num_vogais[4]);

    return 0;
}
