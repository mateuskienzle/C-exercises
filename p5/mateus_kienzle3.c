/* programa que	l� n�meros inteiros do usu�rio at� que o usu�rio digite 9999.
Ao encerrar, apresente na tela o menor e o maior valor lido. */
#include <stdio.h>

int main ()
{
    int num;                                //declara��o daa vari�vel informada (inteira)
    int maior_num, menor_num, contador;     //declara��o das vari�veis resultantes (inteiras)

    contador = 0;
     while (num != 9999){

        printf("Entre com um nro inteiro: ");
        scanf("%d", &num);
        contador++;
        if (num == 9999){
            contador--;
        }

        if (contador == 1 && num != 9999){
           maior_num = num;
           menor_num = num;
        }
        else {
            if (num > maior_num && num != 9999){
                maior_num = num;
            }
            if (num < menor_num && num != 9999){
                menor_num = num;
            }
        }

     }
     if (contador == 0){
        printf("\nNao ha valores para informar\n");
     }

     else if (printf("\nO maior valor vale %d e o menor valor vale %d\n", maior_num, menor_num))

    return 0;

}
