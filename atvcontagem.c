#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main() {
    char string[MAX_LENGTH];
    int length, i, vogais = 0, consoantes = 0, digitos = 0, outros = 0;

    printf("Digite uma string: ");
    fgets(string, MAX_LENGTH, stdin);

    length = strlen(string);

    for (i = 0; i < length; i++)
        {
        if (string[i] >= 'a' && string[i] <= 'z' || string[i] >= 'A' && string[i] <= 'Z')
        {
            char ch = tolower(string[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vogais++;
            }
            else
            {
                consoantes++;
            }
        }
        else if (string[i] >= '0' && string[i] <= '9')
        {
            digitos++;
        }
        else if (string[i] != '\n')
        {
            outros++;
        }
    }
    printf("Número de vogais: %d\n", vogais);
    printf("Número de consoantes: %d\n", consoantes);
    printf("Número de dígitos: %d\n", digitos);
    printf("Outros caracteres: %d\n", outros);
    return 0;
}
