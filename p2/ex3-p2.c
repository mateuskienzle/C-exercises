/* calcula  o montante de juros compostos de uma aplicação ao final do período */
#include <stdio.h>
#include <math.h>

int main ()
{
    float qtd_inicial;         //declaração das variáveis informadas (não inteiras)
    int percent, dias;         //declaração das variáveis informadas (inteiras)
    float montante;            //declaração da variável resultante
    int meses;                 //declaração da variável resultante


    printf("Entre com a quantia inicial: ");
    scanf("%f", &qtd_inicial);
    printf("Entre com o percentual:  ");
    scanf("%d", &percent);
    printf("Entre com o numero de dias:  ");
    scanf("%d", &dias);
    meses =(dias/30);
    montante = qtd_inicial*pow((1+((float)percent/100)),meses);
    printf("Montante final: %.2f\n", montante);

    return 0;
}
