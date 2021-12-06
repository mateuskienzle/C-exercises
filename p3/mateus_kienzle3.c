/* programa que le os coeficientes de uma equação do segundo grau e em seguida calcula e mostra as raízes dessa equação */
#include <stdio.h>
#include <math.h>

int main ()
{
    float coef_a, coef_b, coef_c;      //declaração das variáveis informadas (não inteiras)
    float delta, raiz1, raiz2;         //declaração das variáveis resultantes (não inteiras)


    printf("Entre com os valores dos coeficientes: ");
    scanf(" %f%f%f", &coef_a, &coef_b, &coef_c);

    delta = pow(coef_b, 2) - (4*coef_a*coef_c);
    raiz1 = (-coef_b + sqrt(delta))/(2*coef_a);
    raiz2 = (-coef_b - sqrt(delta))/(2*coef_a);

    if (coef_a == 0) {
        printf("Nao eh equacao do 2o grau");
    }

    else {
        if (delta < 0){
            printf("Nao existe raiz real");
        }

        else if (delta == 0){
            printf("Raiz unica: %.2f", raiz1);
        }

         else if (delta > 0){
            printf("Duas raizes reais:  r1=%.2f  r2=%.2f", raiz1, raiz2);
        }
    }


    return 0;
}
