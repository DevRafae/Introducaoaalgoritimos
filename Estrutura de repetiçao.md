vaiaveis CP e i
printf("informe um numero inteiro);
scanf("%d",&n);
if (n%2==0) printf("o numero %d é par\n",n);
else printf("o numero %d é impar\n",n);


*****em C****

while(i<5)
printf("informe um numero inteiro);
scanf("%d",&n);
if (n%2==0) cp++; //adiciona sempre +1 avariavel CP
i=i+1

Enquanto ( i<5 ){
ler m;
teste de m;
i= i+1;
}


Exercício 1):

#include <stdio.h>

int main()
{ 
    int n, i, cp;
    cp=0;
    i=0;
  while(n!=-1){
      printf("informe um numero inteiro: ");
      scanf("%d", &n);
      if (n%2==0) cp=cp+1;
      printf("Quantidade de pares lidos = %d\n Quantidade de impares lidos = %d\n", cp, 5-cp);
      printf("terminou? -1\n");
      scanf("%df", &n);
    
  }
  return 0;
}



