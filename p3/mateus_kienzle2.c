/* programa que le o tempo de perman�ncia em um estacionamento (em minutos) e calcula o valor a ser pago. */
#include <stdio.h>
#include <math.h>

int main ()
{
    int tempo;      //declara��o da vari�vel informada (inteira)
    int valor, preco;     //declara��o da vari�vel resultante (inteira)


    printf("Entre o tempo de permanencia em minutos: ");
    scanf(" %d", &tempo);


    if (tempo <= 60) {
        printf("O valor a ser pago eh de R$15");
    }

    else if (tempo > 60 && tempo < 480) {
        valor = ceil((tempo/60)*2);
        preco = valor + 15;
        printf("O valor a ser pago eh de R$%d\n", preco);
    }

    else if (tempo > 480) {
        printf("O valor a ser pago eh de R$32");
    }


    return 0;
}
