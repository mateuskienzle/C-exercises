/* calcula  o montante de juros compostos de uma aplica��o ao final do per�odo */
#include <stdio.h>
#include <math.h>

int main ()
{
    float qtd_inicial;         //declara��o das vari�veis informadas (n�o inteiras)
    int percent, dias;         //declara��o das vari�veis informadas (inteiras)
    float montante;            //declara��o da vari�vel resultante
    int meses;                 //declara��o da vari�vel resultante


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
