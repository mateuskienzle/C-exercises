/* s calcula o perímetro e a área do maior quadrado inscrito num círculo */
#include <stdio.h>
#include <math.h>

int main ()
{
    float raio;                          //declaração das variáveis informadas
    float lado, perimetro, area;        //declaração da variável resultante


    printf("Entre com um valor para o raio:  \n");
    scanf("%f", &raio);
    lado = raio*sqrt(2);
    perimetro = lado*4;
    area = lado*lado;
    printf("Perimetro do maior quadrado:  %.2f\n", perimetro);
    printf("Area do maior quadrado:  %.2f\n", area);

    return 0;
}
