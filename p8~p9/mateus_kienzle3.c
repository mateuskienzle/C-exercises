/* Programa que escreve um função void que recebe como entrada um número real r,
uma aproximação inicial x0 para sua raiz cúbica, e uma tolerância t (valor real estritamente positivo).
A função calcula (imprimindo na tela) uma aproximação da raiz cúbica de r de acordo com o algoritmo fornecido
no enunciado do exercício, parando quando |Xn³-r| < t.*/

#include <stdio.h>
#include <math.h>

// função que calcula a aproximação da raiz cubica de um numero real r
void aproximacao_raiz (float r, float x0, float t){

     float equacao = 0; //declaração da variável local resultante (não inteira)

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

 float r, x0, t;  //declaração das variáveis locais informadas (não inteiras)

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
