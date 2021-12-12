/* programa que	que le uma quantidade indefinida mas limitada de valores reais positivos
(um valor negativo é usado para indicar o fim da entrada de dados e não faz
parte dos valores lidos), e armazene-os em um arranjo unidimensional. O número máximo de
valores a ser lido é definido por um #define MAXLIDOS 10, mas o usuário pode digitar menos
valores que esse máximo. Após leitura, o programa deve calcular e imprimir na tela
a) A média dos quadrados dos valores informados;
b) A média das raízes quadradas dos valores informados;
c) A quantidade de valores que estão entre as duas médias calculadas acima (incluindo os
extremos).*/

#include <stdio.h>
#include <math.h>

#define MAXLIDOS  10// esse é o número máximo de valores do arranjo, mas o usuário pode digitar menos valores que esse máximo

int main ()
{
    float array[MAXLIDOS];                                                       //declaração da variável informada (não inteira)
    int contador=0, i=0, valores_entre_medias=0;                                 // declaração das variáveis contadoras resultantes (inteiras)
    float n=0, soma_quadrados=0, soma_raizes=0, media_quadrados, media_raizes;   // declaração das variáveis contadoras resultantes (não inteiras)

    printf("Entre os valores: ");

    do {
        scanf("%f", &n);
        if(n>= 0 && contador < MAXLIDOS){
            array[contador] = n;
            contador++;
        }
    }  while (n >= 0 && contador < MAXLIDOS);


    for (i=0; i < contador; i++){

        soma_quadrados += (pow(array[i], 2));
        soma_raizes += sqrt(array[i]);
    }

    media_quadrados = soma_quadrados/contador;
    media_raizes = soma_raizes/contador;

    for (i=0; i < contador; i++){
        if (array[i] > media_raizes && array[i] < media_quadrados){
            valores_entre_medias++;
        }
    }


    printf("\nMedia dos quadrados: %f", media_quadrados);
    printf("\nMedia das raizes quadradas: %f", media_raizes);
    printf("\nQuantidade de valores entre as duas medias: %d\n", valores_entre_medias);

    return 0;

}
