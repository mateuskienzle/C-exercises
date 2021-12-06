/* programa que informa na tela se a pessoa pode doar sangue ou n�o */
#include <stdio.h>

int main ()
{
    char tatuagem, autorizacao;         //declara��o das vari�veis informadas (caracteres)
    float peso;                        //declara��o das vari�veis informadas (n�o inteiras)
    int idade;                         //declara��o das vari�veis informadas (inteiras)


    printf("Voce fez tatuagem nos ultimos 12 meses (S/N)? ");
    scanf(" %c", &tatuagem);
    printf("Qual seu peso (em Kg)?  ");
    scanf("%f", &peso);
    printf("Qual a sua idade? ");
    scanf("%d", &idade);


    if (toupper(tatuagem) == 'S') {
        printf("Voce NAO pode ser doador!");
    }

    else if (peso < 50) {
        printf("Voce NAO pode ser doador!");
    }

    else if (idade < 16) {
        printf("Voce eh menor de idade. Tem autorizacao dos pais (S/N)?");
        scanf(" %c", &autorizacao);
        if (toupper(autorizacao) == 'S'){
            printf("Parabens! Voce pode ser doador!");
        }
        else printf("Voce NAO pode ser doador!");
    }

    else if (idade > 69) {
        printf("Voce NAO pode ser doador!");
    }

    else printf("Parabens! Voce pode ser doador!");

    return 0;
}
