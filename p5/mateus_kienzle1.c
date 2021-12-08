/* programa que	l� caracteres do teclado at� que o usu�rio digite '!'. O programa deve ent�o retornar
o n�mero de caracteres em min�sculo e o n�mero de caracteres em mai�sculo informados. */
#include <stdio.h>

int main ()
{
    int n_caractere = 1;                   //declara��o da vari�vel contatadora de caracteres informados (inteira)
    char caractere;                        //declara��o da vari�vel informada (caractere)
    int maiusculo = 0, minusculo = 0;      //declara��o das vari�veis resultantes, contadoras de caracteres maiusculos e minusculos (inteira)

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

    /*O la�o condicional abaixo serve apenas para escrever a palavra "caractere" no plural, caso tenha sido informado
    mais do que um caractere em minusculo. Caso contr�rio, escrever "caractere" no singular. */

    if (minusculo > 1){
        printf ("\nVoce digitou %d caracteres em minusculo e %d em maiusculo\n", minusculo, maiusculo);
    }
    else if (minusculo <= 1) {
        printf ("\nVoce digitou %d caractere em minusculo e %d em maiusculo\n", minusculo, maiusculo);
    }

    return 0;
}
