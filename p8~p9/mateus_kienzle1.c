/* programa que converte temperaturas de graus centígrados para fahrenheit
e vice-versa. O programa tem um menu de opções que fornece as opções para
calcular as conversões de temperaturas */

#include<stdio.h>

int opcao; //declaração da variável global (inteira)

// função que exibe o menu de opções
void menu(void){

    printf("\n\nEntre com uma das opcoes:\n"
            "1 - Converte centigrados para fahrenheit\n"
            "2 - Converte fahrenheit para centigrados\n"
            "3 - Sair\n\n");

    printf("Opcao: ");
    scanf("%d", &opcao);

}

// função que converte celsius para fahrenheit
void celsi_para_faren(void){

    float temp_celsius, temp_fahrenheit; //declaração das variáveis locais resultantes (não inteiras)

    printf("Entre com a temperatura em graus celsius: ");
    scanf("%f", &temp_celsius);
    temp_fahrenheit = ((temp_celsius/5)*9)+32;
    printf("Temperatura equivalente em fahrenheit: %.2f", temp_fahrenheit);

}

// função que converte fahrenheit para celsius
void faren_para_celsi(void){

    float temp_celsius, temp_fahrenheit; //declaração das variáveis locais resultantes (não inteiras)

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
