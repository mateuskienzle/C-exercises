/* Programa que apresenta um menu de opções para cadastro, consulta e analise de preço e estoque de modelos de carros.
Esse programa permite que sejam cadastrados até 3 carros no máximo em um vetor de estruturas do tipo CARRO. */

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include <stdlib.h>
#include<string.h>

#define NRCARROS 3    // declaração do número limite de cadastro de carros


// declaração global da estrutura carro
typedef struct carro{
int cod, ano;
char modelo[45], marca[45];
float preco;
} CARRO;


// função que mostra o menu de opções, e recebe e armazena a opção digitada
int menu()
{

    int opcao; // declaração da variável local de entrada (inteira)

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


// função que recebe e armazena as informações dos carros
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

// função que mostra as informações dos carros
void print_carro(CARRO c)
{
    printf("Codigo: %d\n", c.cod);
    printf("Marca: %s\n", c.marca);
    printf("Modelo: %s\n", c.modelo);
    printf("Preco: %.2f\n", c.preco);
    printf("Ano: %d\n", c.ano);
    printf("\n");
}

// função que calcula a média de preço dos carros
float calcMediaPreco(CARRO carros[], int ncarros)
{
    float preco_total=0, preco_medio=0 ;   // declaração das variáveis locais resultantes (não inteiras)
    int i;                                // declaração da variável local contadora resultante (inteira)

    for(i=0; i < ncarros; i++){
        preco_total += carros[i].preco;
    }

    preco_medio = preco_total/ncarros;

    return preco_medio;

}

// função que verifica se o código de um carro informado existe ou não.
CARRO procuraCarro(CARRO carros[], int ncarros, int cod)
{
    int i; // declaração da variável local contadora resultante (inteira)

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
    int ncarros=0, i=0;        // declaração das variáveis locais contadoras resultantes (inteiras)
    int codigo_carro;         // declaração da variável local de entrada (inteira)
    int opcao, cod;           // declaração das vairáveis locais que armazenas valores retornados de funções (inteiras)
    float preco_medio=0;      // declaração da vairável local que armazenas valor retornado da função que calcula o preço médio dos carros (não inteira)

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
