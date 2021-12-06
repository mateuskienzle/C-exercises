/*
Este programa lê três valores inteiros, os soma, os multiplica e exibe o resultado na tela
Entradas: três valores inteiros (lidos via teclado)
Saída: a soma e a multiplicação dos três valores lidos na tela
*/
#include <stdio.h>
int main(void)
{
     int val1, val2, val3; //Declaração das variáveis de entrada
     int soma, produto; //Declaração das variáveis com o resultado
     printf("Valor do primeiro termo da equacao:\n");
     scanf("%d", &val1);

     printf("Valor do segundo termo da equacao:\n");
     scanf("%d", &val2);

     printf("Valor do segundo termo da equacao:\n");
     scanf("%d", &val3);

     soma = val1 + val2 + val3;
     produto = val1*val2*val3;
     printf("Resultado da soma: %d\n", soma);  // nessa linha ocorre a soma dos três valores
     printf("Resultado da multiplicacao: %d\n", produto);  //nessa linha ocorre a multiplicação dos três valores
     return 0;
}
