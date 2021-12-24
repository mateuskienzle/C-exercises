/* Programa que apresenta um menu de op��es para cadastro, consulta e analise de pre�o e estoque de modelos de carros.
Esse programa permite que sejam cadastrados at� 3 carros no m�ximo em um vetor de estruturas do tipo CARRO. */

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include <stdlib.h>
#include<string.h>

#define NRCARROS 3    // declara��o do n�mero limite de cadastro de carros


// declara��o global da estrutura carro
typedef struct carro{
int cod, ano;
char modelo[45], marca[45];
float preco;
} CARRO;


// fun��o que mostra o menu de op��es, e recebe e armazena a op��o digitada
int menu()
{

    int opcao; // declara��o da vari�vel local de entrada (inteira)

    do{
        printf("1 - Cadastro de carro\n");
        printf("2 - Consulta de carro\n");
        printf("3 - Preco medio dos carros\n");
        printf("4 - Imprime estoque revenda\n");
        printf("5 - Fim\n");

        printf("Entre com sua opcao: ");
        scanf("%d", &opcao);
        printf("\n");

        if(opcao > 5 || opcao < 1){
            printf("Opcao invalida! Digite novamente\n\n");
        }

    } while(opcao>5 || opcao<1);

return opcao;
}


// fun��o que recebe e armazena as informa��es dos carros
void cadastraCarro(CARRO *c)
{

    printf("Codigo: ");
    scanf("%d", &c->cod);

    fflush(stdin);
    printf("Marca: ");
    fgets(c->marca, 45, stdin);
    c->marca[strlen(c->marca)-1]='\0';

    fflush(stdin);
    printf("Modelo: ");
    fgets(c->modelo, 45, stdin);
    c->modelo[strlen(c->modelo)-1]='\0';

    printf("Preco: ");
    scanf("%f", &c->preco);

    printf("Ano: ");
    scanf("%d", &c->ano);
    printf("\n");
}

// fun��o que mostra as informa��es dos carros
void print_carro(CARRO c)
{
    printf("Codigo: %d\n", c.cod);
    printf("Marca: %s\n", c.marca);
    printf("Modelo: %s\n", c.modelo);
    printf("Preco: %.2f\n", c.preco);
    printf("Ano: %d\n", c.ano);
    printf("\n");
}

// fun��o que calcula a m�dia de pre�o dos carros
float calcMediaPreco(CARRO carros[], int ncarros)
{
    float preco_total=0, preco_medio=0 ;   // declara��o das vari�veis locais resultantes (n�o inteiras)
    int i;                                // declara��o da vari�vel local contadora resultante (inteira)

    for(i=0; i < ncarros; i++){
        preco_total += carros[i].preco;
    }

    preco_medio = preco_total/ncarros;

    return preco_medio;

}

// fun��o que verifica se o c�digo de um carro informado existe ou n�o.
CARRO procuraCarro(CARRO carros[], int ncarros, int cod)
{
    int i; // declara��o da vari�vel local contadora resultante (inteira)

    CARRO c;

    c.cod = -1;

    for(i=0; i<ncarros; i++){
        if(carros[i].cod == cod){
            c = carros[i];
        }
    }

    return c;
}


// programa principal
int main(void)
{
    int ncarros=0, i=0;        // declara��o das vari�veis locais contadoras resultantes (inteiras)
    int codigo_carro;         // declara��o da vari�vel local de entrada (inteira)
    int opcao, cod;           // declara��o das vair�veis locais que armazenas valores retornados de fun��es (inteiras)
    float preco_medio=0;      // declara��o da vair�vel local que armazenas valor retornado da fun��o que calcula o pre�o m�dio dos carros (n�o inteira)

    CARRO carros[NRCARROS];
    CARRO c;

    do{
        opcao = menu();

        if (opcao == 1){

            if(ncarros <= 2){
                cadastraCarro(&carros[ncarros]);
                ncarros++;
            }
            else {
                printf("Numero limite de cadastro de carros atingido!\n\n");
            }
        }

        else if (opcao == 2){
            printf("Informe o codigo do carro: ");
            scanf("%d", &codigo_carro);
            printf("\n");

            c = procuraCarro(carros, ncarros, codigo_carro);

            if(c.cod != -1){
                print_carro(c);
            }

            else{
                printf("Carro nao existe!\n\n");
            }
        }

        else if (opcao == 3){

            preco_medio = calcMediaPreco(carros, ncarros);
            printf("O Preco medio dos carros eh: %.2f\n\n", preco_medio);
        }

        else if (opcao == 4){

            if(ncarros == 0){
                printf("Nenhum carro foi cadastrado!\n\n");
            }
            else{
                for(i=0; i < ncarros; i++){
                    print_carro(carros[i]);
                    printf("\n");
                }
            }
        }
    } while (opcao >= 1 && opcao <= 4);

    printf("Fim do programa.\n");

    return 0;
}
