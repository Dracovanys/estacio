#include <stdio.h>

int a, b;
int temp_val;

main() {
    
    //Colocando os valores das variáveis
    a = 1;
    b = 2;

    //Exibindo os valores atuais
    printf("Value A: %i\nValue B: %i", a, b);

    //Trocando os valores
    temp_val = a;
    a = b;
    b = temp_val;

    //Exibindo os valores alterados
    printf("\n\nNew Value A: %i\nNew Value B: %i", a, b);

}

