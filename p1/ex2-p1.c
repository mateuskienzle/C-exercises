/*
Este programa l� um valor inteiro, o subtrai de 2021 e exibe o resultado na tela
Entradas: um valor inteiro (lido via teclado)
Sa�da: o resultado da subtra��o de 2021 pelo valor de entrada
*/
#include <stdio.h>
int main(void)
{
     int val1; //Declara��o da vari�vel de entrada
     int resultado; //Declara��o da vari�vel com o resultado

     printf("Entre com o ano de seu nascimento:\n");
     scanf("%d", &val1);
     resultado = 2021 - val1;;
     printf("Voce tem %d anos", resultado);
     return 0;
}
