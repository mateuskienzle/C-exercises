/* programa que	l� um arranjo unidimensional com um tamanho maximo (TAMMAX) de elementos (TAMMAX �
um n�mero par dado atrav�s de um #define) considerando que o usu�rio deve inserir obrigatoriamente a
mesma quantidade de n�meros pares e �mpares na leitura, em uma ordem qualquer. O programa gera
um segundo arranjo com mesmo tamanho, invertendo a ordem dos elementos da seguinte maneira:
no lugar dos n�meros pares colocar os �mpares e vice-versa, respeitando a ordem no qual foram inseridos.
Ao final, o programa deve imprimir os dois vetores*/
#include <stdio.h>
#include <math.h>

#define TAMMAX  10// ao lado de TAMMAX deve ser informado o n�mero par de elementos do arranjo.

int main ()
{
    int arranjo[TAMMAX];                                                                            //declara��o da vari�vel informada (inteira)
    int pares[TAMMAX/2], impares[TAMMAX/2], saida[TAMMAX];                                          //declara��o das vari�veis resultantes (inteiras)
    int contador, cont_entrada_impar=0, cont_entrada_par=0, cont_saida_impar=0, cont_saida_par=0;   // declara��o das vari�veis contadoras (inteiras)

    printf("Arranjo de entrada: ");
    for (contador=0;contador < TAMMAX;contador++){
        scanf("%d", &arranjo[contador]);
    }

    for(contador=0;contador<TAMMAX;contador++){
        if (arranjo[contador] % 2 != 0){
            impares[cont_entrada_impar] = arranjo[contador];
            cont_entrada_impar++;
        }
        else if (arranjo[contador] % 2 == 0){
            pares[cont_entrada_par] = arranjo[contador];
            cont_entrada_par++;
        }
    }

    for(contador=0;contador<TAMMAX;contador++){
        if (arranjo[contador] % 2 == 0){
            saida[contador] = impares[cont_saida_impar];
            cont_saida_impar++;
        }
        else if (arranjo[contador] % 2 !=0){
            saida[contador] = pares[cont_saida_par];
            cont_saida_par++;
        }
    }

    printf("Arranjo de saida: ");
    for(contador=0;contador<TAMMAX;contador++){
        printf("%d ", saida[contador]);
    }
    printf("\n");

    return 0;

}
