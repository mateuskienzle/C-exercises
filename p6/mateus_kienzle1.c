/* programa que	lê um string do usuário de comprimento máximo igual a 60 (não precisa validar) e
cria outro string sem os espaços em branco. Também, apresenta o número de vogais presentes no
string original. Ao final, o programa imprime na tela o novo string e o número de vogais.*/
#include <stdio.h>
#include <string.h>

#define TAM 60

int main ()
{
    char string[TAM+1];                //declaração da variável informada (caractere)
    int contador, contador2, vogais;   //declaração das variáveis resultantes (inteiras)

    printf("Entre com um string: ");
    fgets(string, TAM+1, stdin);
    string[strlen(string)-1] = '\0';

    contador2 = 0;

    for (contador=0;contador <= strlen(string);contador++){

        string[contador] = string[contador+contador2];

        if (toupper(string[contador]) == 'A' || toupper(string[contador]) == 'E' || toupper(string[contador]) == 'I'
            || toupper(string[contador]) == 'O' || toupper(string[contador]) == 'U'){

                vogais++;
            }

        if (string[contador] == ' '){
            contador2++;
            contador--;
        }
    }

    printf("\nString sem espacos: %s", string);
    printf("\nNro de vogais: %d\n", vogais);
    return 0;

}
