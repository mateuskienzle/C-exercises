/* programa que	lê caracteres do teclado até que o usuário digite '!'. O programa deve então retornar
o número de caracteres em minúsculo e o número de caracteres em maiúsculo informados. */
#include <stdio.h>

int main ()
{
    int n_caractere = 1;                   //declaração da variável contatadora de caracteres informados (inteira)
    char caractere;                        //declaração da variável informada (caractere)
    int maiusculo = 0, minusculo = 0;      //declaração das variáveis resultantes, contadoras de caracteres maiusculos e minusculos (inteira)

    while (caractere != '!'){

        printf("Entre com o %do caractere: ", n_caractere);
        scanf(" %c", &caractere);

        n_caractere++;

        if(caractere >= 'a' && caractere <= 'z'){
            minusculo++;
        }
        else if (caractere >= 'A' && caractere <= 'Z'){
            maiusculo++;
        }

    }

    /*O laço condicional abaixo serve apenas para escrever a palavra "caractere" no plural, caso tenha sido informado
    mais do que um caractere em minusculo. Caso contrário, escrever "caractere" no singular. */

    if (minusculo > 1){
        printf ("\nVoce digitou %d caracteres em minusculo e %d em maiusculo\n", minusculo, maiusculo);
    }
    else if (minusculo <= 1) {
        printf ("\nVoce digitou %d caractere em minusculo e %d em maiusculo\n", minusculo, maiusculo);
    }

    return 0;
}
