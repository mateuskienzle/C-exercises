/* programa que converte temperaturas de graus cent�grados para fahrenheit
e vice-versa. O programa tem um menu de op��es que fornece as op��es para
calcular as convers�es de temperaturas */

#include<stdio.h>

int opcao; //declara��o da vari�vel global (inteira)

// fun��o que exibe o menu de op��es
void menu(void){

    printf("\n\nEntre com uma das opcoes:\n"
            "1 - Converte centigrados para fahrenheit\n"
            "2 - Converte fahrenheit para centigrados\n"
            "3 - Sair\n\n");

    printf("Opcao: ");
    scanf("%d", &opcao);

}

// fun��o que converte celsius para fahrenheit
void celsi_para_faren(void){

    float temp_celsius, temp_fahrenheit; //declara��o das vari�veis locais resultantes (n�o inteiras)

    printf("Entre com a temperatura em graus celsius: ");
    scanf("%f", &temp_celsius);
    temp_fahrenheit = ((temp_celsius/5)*9)+32;
    printf("Temperatura equivalente em fahrenheit: %.2f", temp_fahrenheit);

}

// fun��o que converte fahrenheit para celsius
void faren_para_celsi(void){

    float temp_celsius, temp_fahrenheit; //declara��o das vari�veis locais resultantes (n�o inteiras)

    printf("Entre com a temperatura em fahrenheit: ");
    scanf("%f", &temp_fahrenheit);
    temp_celsius = ((temp_fahrenheit-32)/9)*5;
    printf("Temperatura equivalente em graus celsius: %.2f", temp_celsius);

}

// programa principal
int main(){

   do{
        menu();
        if (opcao < 1 || opcao > 3){
            printf("Opcao invalida. Insira uma opcao valida.");
        }
        else if (opcao == 1){
            celsi_para_faren();
        }
        else if (opcao == 2){
            faren_para_celsi();
        }
    } while (opcao !=3);

}
