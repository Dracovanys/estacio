#include <stdio.h>

int a, b;
int temp_val;

main() {    
    
    printf("Digite o valor de A: ");
    scanf("%i", &a);
    
    printf("Digite o valor de B: ");
    scanf("%i", &b);
    
    printf("\nValue A: %i\nValue B: %i", a, b);

    temp_val = a;
    a = b;
    b = temp_val;

    printf("\n\nNew Value A: %i\nNew Value B: %i", a, b);

}

