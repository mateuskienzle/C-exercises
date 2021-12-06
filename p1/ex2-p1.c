/*
Este programa lê um valor inteiro, o subtrai de 2021 e exibe o resultado na tela
Entradas: um valor inteiro (lido via teclado)
Saída: o resultado da subtração de 2021 pelo valor de entrada
*/
#include <stdio.h>
int main(void)
{
     int val1; //Declaração da variável de entrada
     int resultado; //Declaração da variável com o resultado

     printf("Entre com o ano de seu nascimento:\n");
     scanf("%d", &val1);
     resultado = 2021 - val1;;
     printf("Voce tem %d anos", resultado);
     return 0;
}
