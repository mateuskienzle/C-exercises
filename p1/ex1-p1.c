/*
Este programa l� tr�s valores inteiros, os soma, os multiplica e exibe o resultado na tela
Entradas: tr�s valores inteiros (lidos via teclado)
Sa�da: a soma e a multiplica��o dos tr�s valores lidos na tela
*/
#include <stdio.h>
int main(void)
{
     int val1, val2, val3; //Declara��o das vari�veis de entrada
     int soma, produto; //Declara��o das vari�veis com o resultado
     printf("Valor do primeiro termo da equacao:\n");
     scanf("%d", &val1);

     printf("Valor do segundo termo da equacao:\n");
     scanf("%d", &val2);

     printf("Valor do segundo termo da equacao:\n");
     scanf("%d", &val3);

     soma = val1 + val2 + val3;
     produto = val1*val2*val3;
     printf("Resultado da soma: %d\n", soma);  // nessa linha ocorre a soma dos tr�s valores
     printf("Resultado da multiplicacao: %d\n", produto);  //nessa linha ocorre a multiplica��o dos tr�s valores
     return 0;
}
