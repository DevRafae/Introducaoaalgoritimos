#include <stdio.h>

int main(void) {
    float q;

    // Solicitar a quantidade de latão ao usuário
    printf("Digite a quantidade do latão em gramas: ");
    scanf("%f", &q);

    // Calcular e exibir a quantidade de cobre e zinco
    printf("A quantidade de cobre é: %.2f gramas\n", q * 0.7);
    printf("A quantidade de zinco é: %.2f gramas\n", q * 0.3);

    return 0;
}
