/* programa que	lê um valor x do teclado e faça consistência desse valor conforme definido
pela série de potências descrita no enunciado do exercício. A seguir, calcula o valor aproximado
da função nesse ponto x, parando de incluir termos quando o valor do termo a ser incluído (em módulo)
for menor do que uma tolerância tol a ser lida do usuário. Feito isso, o programa imprime o valor calculado */
#include <stdio.h>
#include <math.h>

int main ()
{
    float x, tol;          //declaração das variáveis informadas (não inteiras)
    float fx, termo;       //declaração da variável resultante (não inteira)
    int contador, sinal;   //declaração da variável resultante (inteira)

    printf("Entre com o valor de x: ");
    scanf("%f", &x);

    if (-1 <= x && x <= 1){
        printf("Entre com o valor de tolerancia: ");
        scanf("%f", &tol);

        contador = 1;
        fx = 0;
        sinal = 1;
        do{
            termo = ((pow(x, contador))/(contador * (contador+1)));
            contador += 2;
            if (fabs(termo) >= tol){
            fx +=  termo*sinal;
            sinal = -sinal;
            }
        }
        while (fabs(termo) >= tol);

        printf ("\nO resultado foi %f \n", fx);

    }

    else printf ("\nValor de x fora do intervalo!\n");

    return 0;

}
