#include <stdio.h>

int main()
{
    int  fim=0, contador=0;
    float n, peso;
   
    
     while (fim == 0){
         contador ++;
         printf("Digite o seu peso: ");
        scanf("%f", &n);
   peso = peso+n;
   printf("fim? Digite 1 para sim e 0 caso queira incluir mais um valor: ");
   scanf("%d", &fim);
     }
     printf("A quantidade de pesos que você inseriu foi: %d\n", contador);
     printf("Seu peso médio nos ultimos 4 meses foi: %f\n", peso/contador);
     
    return 0;
}


