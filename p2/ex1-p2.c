/* calcula o n�mero de l�mpadas necess�rias para iluminar adequadamente o quarto */
#include <stdio.h>
#include <math.h>

int main ()
{
    float larg, comp, pot;   //declara��o das vari�veis informadas
    float area, lamp;        //declara��o da vari�vel resultante


    printf("Entre com a largura e o comprimento do quarto: \n");
    scanf("%f%f", &larg, &comp);
    printf("Entre com a potencia das lampadas: \n");
    scanf("%f", &pot);
    area = larg * comp;
    lamp = ((area * 16)/pot);
    printf("Numero de lampadas: %.0f\n", ceil(lamp));

    return 0;
}
