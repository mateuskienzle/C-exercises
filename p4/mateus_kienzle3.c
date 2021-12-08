/* programa que	lê do usuário o número de termos que o usuário deseja aproximar π e imprime	na	tela o valor de	π
calculado de acordo com a fórmula do enunciado e o número de termos definido pelo usuário. O número mínimo de termos
é 2. */
#include <stdio.h>
#include <math.h>

int main ()
{
    int n_termos;                //declaração da variável informada (inteira)
    float pi;                    //declaração da variável informada (não inteira)
    int denominador, contador;   //declaração das variáveis resultantes (inteira)

    printf("Entre com o numero de termos para calculo de PI: ");
    scanf("%d", &n_termos);

    denominador = 1;
    pi = 0;

    for(contador=1; contador<=n_termos; contador++){

        pi -= 4/(denominador * pow(-1, contador));
        denominador += 2;

    }

    printf("\nValor de PI com %d termos: %.6f\n", n_termos, pi);


    return 0;
}
