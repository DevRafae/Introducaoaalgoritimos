#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Digite um número inteiro: ");
    scanf("%d", &a);
    printf("Digite outro número inteiro: ");
    scanf("%d", &b);
    printf("Digite mais um número inteiro: ");
    scanf("%d", &c);


    if (a > b && a > c) {
        // a é o maior
        if (b > c) {

            printf("Os valores enviados na ordem decrescente são: %d, %d, %d\n", a, b, c);
        } else {

            printf("Os valores enviados na ordem decrescente são: %d, %d, %d\n", a, c, b);
        }
    } else if (b > a && b > c) {
        // b é o maior
        if (a > c) {

            printf("Os valores enviados na ordem decrescente são: %d, %d, %d\n", b, a, c);
        } else {

            printf("Os valores enviados na ordem decrescente são: %d, %d, %d\n", b, c, a);
        }
    } else {
        // c é o maior
        if (a > b) {

            printf("Os valores enviados na ordem decrescente são: %d, %d, %d\n", c, a, b);
        } else {

            printf("Os valores enviados na ordem decrescente são: %d, %d, %d\n", c, b, a);
        }
    }

    return 0;
}
