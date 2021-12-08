/* programa que	l� um valor x do teclado e fa�a consist�ncia desse valor conforme definido
pela s�rie de pot�ncias descrita no enunciado do exerc�cio. A seguir, calcula o valor aproximado
da fun��o nesse ponto x, parando de incluir termos quando o valor do termo a ser inclu�do (em m�dulo)
for menor do que uma toler�ncia tol a ser lida do usu�rio. Feito isso, o programa imprime o valor calculado */
#include <stdio.h>
#include <math.h>

int main ()
{
    float x, tol;          //declara��o das vari�veis informadas (n�o inteiras)
    float fx, termo;       //declara��o da vari�vel resultante (n�o inteira)
    int contador, sinal;   //declara��o da vari�vel resultante (inteira)

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
