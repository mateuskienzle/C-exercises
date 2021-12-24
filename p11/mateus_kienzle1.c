/* Programa que recebe como entrada dois conjuntos de seis n�meros, sendo que um conjunto representa
os seis n�meros de uma aposta na Mega Sena, e o outro conjunto representa os seis n�meros sorteados.
Ao final, o programa informa quantos n�meros sorteados s�o iguais aos n�meros apostados, junto com uma
frase que indica o n�mero de acertos da posta (caso tenha acertado algum n�mero). */

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include <stdlib.h>

// fun��o que analisa o numero de acertos da aposta em rela��o ao sorteio
int avalia_aposta (int *aposta, int *sorteio, int tam){

    int i, j, acerto = 0;     //declara��o das vari�veis locais contadoras (inteiras)

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            if(aposta[i] == sorteio[j]){
               acerto++;
            }
        }
    }
    return acerto;
}

// programa principal
int main(void){

    int tam = 6, resultado;                 //declara��o das vari�veis locais resultantes (inteiras)
    int numero, sorteio[tam], aposta[tam];  //declara��o das vari�veis locais de entrada (inteiras)
    int i, j;                               //declara��o das vari�veis locais contadoras (inteiras)

    printf("Entre com as 6 dezenas sorteadas: \n");
    for(i = 0; i < tam; i++){
        do{
            scanf("%d", &numero);
            if(numero < 1 || numero > 80){
               printf("\nNumero invalido! Os numeros devem estar no intervalo de 0 a 80. \n");
            }
        } while(numero < 1 || numero > 80);
        sorteio[i] = numero;
    }

     printf("\nEntre com o jogo: \n");
     for(j = 0; j < tam; j++){
        do{
            scanf("%d", &numero);
            if(numero < 1 || numero > 80){
            printf("\nNumero invalido! Os numeros devem estar no intervalo de 0 a 80. \n");
            }
        } while(numero < 1 || numero > 80);
        aposta[j] = numero;
     }

    resultado = avalia_aposta(aposta, sorteio, tam);

    printf("\nNumero de acertos: %d \n", resultado);
     if(resultado == 4){
        printf("Quadra!\n");
     }
     else if(resultado == 5){
             printf("Quina!\n");
     }
     else if(resultado == 6){
             printf("Sena!\n");
     }
     return 0;

}
