/* s calcula o per�metro e a �rea do maior quadrado inscrito num c�rculo */
#include <stdio.h>
#include <math.h>

int main ()
{
    float raio;                          //declara��o das vari�veis informadas
    float lado, perimetro, area;        //declara��o da vari�vel resultante


    printf("Entre com um valor para o raio:  \n");
    scanf("%f", &raio);
    lado = raio*sqrt(2);
    perimetro = lado*4;
    area = lado*lado;
    printf("Perimetro do maior quadrado:  %.2f\n", perimetro);
    printf("Area do maior quadrado:  %.2f\n", area);

    return 0;
}
