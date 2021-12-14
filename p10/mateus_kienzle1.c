/* Programa que verifica primeiro se os lados a, b e c recebidos como par�metros formam um tri�ngulo e,
em caso afirmativo, qual o tipo de tri�ngulo. Caso ele seja tri�ngulo, retorna na o valor da �rea.
Al�m disso, o programa pergunta se o usu�rio deseja inserir novas medidas para analisar
o tipo de tri�ngulo das novas medidas*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include <stdlib.h>

// fun��o que verifica qual tipo de triangulo � formado a partir dos valores inseridos
char triangulo(float a, float b, float c, float *area){

    float T;
    char tipo;

    if((fabs(b-a) < a && a < b+c) && (fabs(a-c) < b && b < a+c) && (fabs(a-b) < c && c < a+b)){

        T = (a+b+c)/2;
        *area = sqrt(T*(T - a)*(T - b)*(T - c));

        if(a==b && a==c && b==c){
            tipo = 'q';
        }

        else if(a != b && a != c && b != c){
            tipo = 'e';
        }

        else {
            tipo = 'i';
        }
    }
    else {
        tipo = 'n';
    }

    return tipo;
}

// fun��o que realiza a pergunta para o usu�rio se quer ler mais um triangulo
char le_s_n(void){

    char resposta; //declara��o da vari�vel local resultante (caractere)

    do{
        printf("Mais um? (S/N)");
        scanf(" %c", &resposta);

        resposta = toupper(resposta);
        if(resposta != 'S' && resposta != 'N'){
           printf("Resposta inv�lida! ");

        }
     } while(resposta != 'S' && resposta != 'N');

 return resposta;

}

// programa principal
int main(){

    float a, b, c;             //declara��o das vari�veis locais inseridas  (n�o inteiras)
    float area;                //declara��o da vari�vel local resultante (n�o inteira)
    char retorno, pergunta;    //declara��o das vari�veis locais que recebem os resultados da outras fun��es (caracteres)

    do{
    printf("\nEntre com os valores de a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    retorno = triangulo(a, b, c, &area);

    if(retorno == 'q'){
       printf("Triangulo equilatero com area: %f\n", area);
    }

    else if(retorno == 'i'){
       printf("Triangulo isosceles com area: %f \n", area);
    }

    else if(retorno == 'e'){
       printf("Triangulo escaleno com area: %f\n", area);
    }

    else if(retorno == 'n'){
       printf("Nao eh triangulo!\n");
    }

    pergunta = le_s_n();

    }while(pergunta != 'N');

    printf("\nPrograma encerrado\n");

    return 0;
}

