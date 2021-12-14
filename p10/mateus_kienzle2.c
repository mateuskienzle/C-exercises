/* Programa que encontra o vetor intersec��o entre 2 vetores de inteiros
lidos do usu�rio. O n�mero m�ximo de elementos em cada vetor � 20.
O programa recebe os vetores a e b, o n�mero de elementos de a (na) e b (nb), retornando o
vetor intersec��o e o n�mero de elementos do vetor c. Os vetores podem ter um
n�mero diferente de elementos, mas considere que n�o h� elementos repetidos em cada um dos
vetores de entrada. */


#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include <stdlib.h>

#define MAX 20 // defini��o do n�mero m�ximo de elementos que cada vetor recebe

// fun��o que estrutura o vetor intersec��o
void calc_intersec(int a[], int na, int b[], int nb, int c[], int *nc){

    int i=0, j=0, contador=0;    //declara��o das vari�veis locais contadoras resultantes (inteiras)

    for(i = 0; i < na; i++){
        for(j = 0; j < nb; j++){
            if(a[i] == b[j]){
                c[contador] = a[i];
                contador++;
                *nc = contador;
            }
        }
     }
}

// programa principal
int main(void)
{
    int a[MAX], na, b[MAX], nb, c[MAX], nc = 0;  //declara��o das vari�veis locais  inseridas (inteiras)
    int i, j, contador;                         //declara��o das vari�veis locais contadoras resultantes (inteiras)

    printf("Entre com o nro de elementos do vetor a: ");
    do{
        scanf("%d", &na);
        if(na <= 0 || na > MAX){
        printf("N�mero m�ximo de elementos em cada vetor � 20, e o minimo eh 1\n");
        }
     }while(na <= 0 || na > MAX);
     printf("Entre com os %d elementos do vetor a: ", na);
     for(i = 0; i < na; i++){
         scanf("%d", &a[i]);
     }
     printf("Entre com o nro de elementos do vetor b: ");
     do{
        scanf("%d", &nb);
        if(nb <= 0 || nb > MAX){
           printf("N�mero m�ximo de elementos em cada vetor � 20, e o minimo eh 1\n");
        }
     }while(nb <= 0 || nb > MAX);
     printf("Entre com os %d elementos do vetor b: ", nb);
     for(j = 0; j < nb; j++){
         scanf("%d", &b[j]);
     }

     calc_intersec(a, na, b, nb, c, &nc);

     if(nc == 0){
        printf("\nVetor interseccao: vazio");
     }
     else{
     printf("\nVetor interseccao: ");
     for(contador = 0; contador < nc; contador++){
         printf("%d ", c[contador]);
         }
     }
     printf("\n");

    return 0;
}
