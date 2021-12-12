/* programa que recebe como entrada um número real x (assume-se que x é positivo) e um indicador (char L, ou Q).
Se o indicador for L, o programa retorna o maior número inteiro n tal que 0+1+2+···+n ≤ x. Se o indicador for Q,
retorna o maior número inteiro n tal que 0² + 1² + 2² + · · · + n² ≤ x. Caso o indicador seja inválido, a função
retorna o valor -1. Caso o valor retornado pela função seja -1, o programa imprime na tela uma mensagem de erro.
Caso contrário, imprime o valor de n na tela. */

#include<stdio.h>
#include<math.h>
#include<ctype.h>

// função que realiza o cálculo da equação de acordo com o indicador que o usuário selecionar
int equacao_do_maior_inteiro(float x, char indicador){

    int n=0, soma=0, i=0; //declaração das variáveis locais contadoras resultantes (inteiras)

    if (toupper(indicador) == 'L'){

        do{
            n = i;
            i++;
            soma = soma + i;

        } while (soma <= x);
    }

    else if (toupper(indicador) == 'Q'){

        do{
            n = i;
            i++;
            soma = soma + pow(i,2);

        } while (soma <= x);
    }

    else if (toupper(indicador) != 'L' && toupper(indicador) != 'Q'){
        n = -1;
    }

    return n;

}

// programa principal
int main(){

    int valor_n;      //declaração da variável local resultante (inteira)
    float x;          //declaração da variável local informada (não inteira)
    char indicador;  //declaração da variável local informada (caractere)

    printf("Entre o valor de x: ");
    scanf("%f", &x);
    printf("Entre o indicador (L ou Q): ");
    scanf(" %c", &indicador);

    valor_n = equacao_do_maior_inteiro(x, indicador);

    if(valor_n == -1){
        printf("Codigo invalido!\n");
     }
    else (printf("\nO valor de n eh: %d\n", valor_n));

     return 0;
}
