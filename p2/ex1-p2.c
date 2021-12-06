/* calcula o número de lâmpadas necessárias para iluminar adequadamente o quarto */
#include <stdio.h>
#include <math.h>

int main ()
{
    float larg, comp, pot;   //declaração das variáveis informadas
    float area, lamp;        //declaração da variável resultante


    printf("Entre com a largura e o comprimento do quarto: \n");
    scanf("%f%f", &larg, &comp);
    printf("Entre com a potencia das lampadas: \n");
    scanf("%f", &pot);
    area = larg * comp;
    lamp = ((area * 16)/pot);
    printf("Numero de lampadas: %.0f\n", ceil(lamp));

    return 0;
}
