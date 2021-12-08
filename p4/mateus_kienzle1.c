/* programa que identifica o mês do	pagamento do IPVA de um carro, baseado na parte numérica da	placa informada pelo usuário */
#include <stdio.h>

int main ()
{
    int placa;                //declaração da variável informada (inteiras)
    int ultimo_digito;       //declaração da variável resultante (inteira)


    printf("Entre com a placa: ");
    scanf("%d", &placa);
    ultimo_digito = placa%10;

    if (placa >= 1000 && placa <= 9999){

        switch(ultimo_digito) { //analisa os digitos da placa informada para retornar o mês de vencimento do IPVA.

            case 1: printf("Mes de vencimento Janeiro\n");
                                break;
            case 2: printf("Mes de vencimento Fevereiro\n");
                                break;
            case 3: printf("Mes de vencimento Marco\n");
                                break;
            case 4: printf("Mes de vencimento Abril\n");
                                break;
            case 5: printf("Mes de vencimento Maio\n");
                                break;
            case 6: printf("Mes de vencimento Junho\n");
                                break;
            case 7: printf("Mes de vencimento Julho\n");
                                break;
            case 8: printf("Mes de vencimento Agosto\n");
                                break;
            case 9: printf("Mes de vencimento Setembro\n");
                                break;
            case 0: printf("Mes de vencimento Outubro\n");
                                break;
        }
    }

    else printf ("\nO numero da placa deve ser maior ou igual a 1000 e menor ou igual a 9999\n");

    return 0;
}
