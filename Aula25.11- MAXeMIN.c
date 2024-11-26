#include <stdio.h>

int main() {
    int N, NUM, MAX, I;

    // Lê a quantidade de números a serem lidos
    printf("digite quantos numeros serão lidos: ");
    scanf("%d", &N);

    // Lê o primeiro número
    printf("digite o primeiro numero: ");
    scanf("%d", &NUM);
    MAX = NUM;  // Inicializa o valor máximo com o primeiro número

    // Laço para ler os outros números e encontrar o maior
    for (I = 1; I <= N - 1; I++) {
        scanf("%d", &NUM);
        if (NUM > MAX) {
            MAX = NUM;  // Atualiza o valor máximo
        }
    }

    // Exibe o valor máximo
    printf("Valor maximo = %d\n", MAX);

    return 0;
}
