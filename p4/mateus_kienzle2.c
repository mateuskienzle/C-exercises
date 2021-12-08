/* programa	que	le as informações de cinco	moradias e,	no final, gera um relatório	contendo o	número médio de
pessoas	por	residência,	a renda	média mensal e o número	de	moradias com acesso	a internet. */
#include <stdio.h>

int main ()
{
    int pessoas;                              //declaração da variável informada (inteiras)
    float renda;                              //declaração da variável informada (não inteiras)
    char acesso_internet;                     //declaração da variável informada (caractere)
    int contador, total_acesso_internet;      //declaração das variáveis resultantes (inteiras)
    float total_renda, total_pessoas;         //ddeclaração das variáveis informadas (não inteiras)

    total_acesso_internet = 0;
    total_pessoas = 0;
    total_renda = 0;

    for(contador=1; contador<=5; contador++){
        printf("\nQuantas pessoas moram na residencia? ");
        scanf("%d", &pessoas);
        total_pessoas += pessoas;
        printf("Qual a renda total da moradia? R$");
        scanf("%f", &renda);
        total_renda += renda;
        printf("Possui acesso a internet? (S/N) ");
        scanf(" %c", &acesso_internet);
        if (toupper(acesso_internet) == 'S'){
            total_acesso_internet++;
        }
    }

    printf("\nNro medio de pessoas por residencia: %.2f\n", total_pessoas/5);
    printf("Renda mensal media: R$%.2f\n", total_renda/5);
    printf("Nro de moradias com acesso a internet: %d\n", total_acesso_internet);


    return 0;
}
