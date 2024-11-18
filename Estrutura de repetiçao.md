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

#include <stdio.h>]

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


**** 18/11/2024***


scanf("%d", &n);
s=0; c27=0;
i=1;
while (i<=n){
scanf("%d", &a);
if (a%2==0 || a%7==0){c27++; s+=a;} //s=s+a
i++;
if(c27>0) printf("Media multiplos 2 ou 7= %2f\n", (s*1.0)/c27);
else printf("não informados multiplose de 2 ou 7\n");

cabeçalho do for tem 3 partes e os pontos e virgula são obrigatórios. separar dentro do parentese por virgula.

for( i=1 ;i <= n; i++)//executado antes de começar o laço: (inicialiação; condição; finalização){
sacanf("%d", &a);            //Instruções
if(a%2==0 || a%7 ==0){       //Instruções

//ao invés de colocar a finalizaçao lá em cima denttro do parenteses, podemos deixar lá vazio e colocar a finalização no final:
i++
}


