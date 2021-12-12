/* programa que	l� um string do usu�rio de comprimento m�ximo igual a 60 (n�o precisa validar) e
cria outro string sem os espa�os em branco. Tamb�m, apresenta o n�mero de vogais presentes no
string original. Ao final, o programa imprime na tela o novo string e o n�mero de vogais.*/
#include <stdio.h>
#include <string.h>

#define TAM 60

int main ()
{
    char string[TAM+1];                //declara��o da vari�vel informada (caractere)
    int contador, contador2, vogais;   //declara��o das vari�veis resultantes (inteiras)

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
