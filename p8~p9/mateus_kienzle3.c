/* Programa que escreve um fun��o void que recebe como entrada um n�mero real r,
uma aproxima��o inicial x0 para sua raiz c�bica, e uma toler�ncia t (valor real estritamente positivo).
A fun��o calcula (imprimindo na tela) uma aproxima��o da raiz c�bica de r de acordo com o algoritmo fornecido
no enunciado do exerc�cio, parando quando |Xn�-r| < t.*/

#include <stdio.h>
#include <math.h>

// fun��o que calcula a aproxima��o da raiz cubica de um numero real r
void aproximacao_raiz (float r, float x0, float t){

     float equacao = 0; //declara��o da vari�vel local resultante (n�o inteira)

     do{

        if(fabs(pow(x0, 3) - r) > t){
           equacao = x0 - (pow(x0, 3) - r)/(3 * pow(x0, 2));
           x0 = equacao;
        }

     } while(fabs(pow(x0, 3) - r) > t);

     printf("\nA raiz cubica aproximada de %f eh: %f\n", r, equacao);
}

// programa principal
int main(void){

 float r, x0, t;  //declara��o das vari�veis locais informadas (n�o inteiras)

 printf("Entre com o valor de r: ");
 scanf("%f", &r);
 printf("Entre com o valor de x0: ");
 scanf("%f", &x0);
 printf("Entre a tolerancia: ");
 scanf("%f", &t);

 if(t <= 0){

    printf("\nO valor de t deve ser um numero real estritamente positivo \n");

 }

 else aproximacao_raiz(r, x0, t);

 return 0;

}
