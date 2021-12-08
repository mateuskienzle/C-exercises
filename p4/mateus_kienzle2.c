/* programa	que	le as informa��es de cinco	moradias e,	no final, gera um relat�rio	contendo o	n�mero m�dio de
pessoas	por	resid�ncia,	a renda	m�dia mensal e o n�mero	de	moradias com acesso	a internet. */
#include <stdio.h>

int main ()
{
    int pessoas;                              //declara��o da vari�vel informada (inteiras)
    float renda;                              //declara��o da vari�vel informada (n�o inteiras)
    char acesso_internet;                     //declara��o da vari�vel informada (caractere)
    int contador, total_acesso_internet;      //declara��o das vari�veis resultantes (inteiras)
    float total_renda, total_pessoas;         //ddeclara��o das vari�veis informadas (n�o inteiras)

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
