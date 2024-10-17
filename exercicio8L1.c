#include <stdio.h>

int main(void) {
    int idade, nascimento, sexo;
    int anoAtual = 2024;

printf("digite 0 se você é do sexo masculino e 1 se você é do sexo feminino: ");
  scanf("%d%", &sexo);

  printf("digite o ano que você nasceu: ");
  scanf("%d", &nascimento);

  idade = anoAtual - nascimento;

  if (idade >= 70){
    printf("Você tem mais de 70 anos");
  } else if (idade >= 18){
    if (sexo == 0){
      printf("Você é um homem que já tem ou vai completar 18 anos em %d\n", anoAtual);
    }else if (sexo == 1){
      printf("Você é uam mulher que já tem ou vai completar 18 anos em %d\n", anoAtual);
    }else{
      printf("Você não digitou um sexo valido.");
    }
  }else {
    printf( "Você ainda não tem 18 anos");
  }

    return 0;
}
