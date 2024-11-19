Nome: Rafaela Januário Silva. 				 RA: 33773


Atividade 02 

1. Escrever um algoritmo que lê N valores e conta e informa quantos deles estão no intervalo [10,20] e também calcula e informa a soma dos que estão fora do intervalo. 

#include <stdio.h>

int main() {
    int contador = 0, valor, somafora = 0, fim, somadentro =0;

    printf("Você quer começar a digitar números? Digite 1 para sim e 0 para não: ");
    scanf("%d", &fim);

  //enquanto o usuario quiser continuar o prog vai pedir outro numero
    while (fim == 1) {
        printf("Digite um numero: ");
        scanf("%d", &valor);

    // o prog verifica se o numero ta entre 10 e 20
        if ((valor >= 10) && (valor <= 20)) {
            contador++;  // se tiver coloca mais 1 no contador
            somadentro += valor; //vai somar os valores que atendem ao intervalo;
        } else {
            somafora += valor;  // Se não estiver coloca mais um no contador dos numero de fora
        }

        // Pergunta se o usuario quer continuar
        printf("Você quer adicionar mais valores? Digite 1 para sim e 0 para não: ");
        scanf("%d", &fim);
}

    //se o usuario não quer mais continuar digitando mosta o valor final
    
   if (contador > 0) {  // Se tem valores dentro do intervalo de 10 e 20
        float media = (float)somadentro / contador; //faz a soma desses valores e divide pelo umero de valores que foram somados
        printf("A média dos valores entre 10 e 20 digitados é: %.2f\n", media);
    } else {
        printf("Nenhum valor foi digitado no intervalo [10,20].\n");// caso nenhum dos valores digitados esteja entre 10 e 20
    }

    return 0;
}
   

3. Ler um número inteiro n e escrever uma figura similar à seguinte com n linhas (o exemplo corresponde ao caso em que o valor de n é 4) * ** *** **** Dica: vai precisar utilizar dois laços aninhados. 

    
    #include <stdio.h>

int main() {
    int numero, r, l;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    // Laço externo para contar o número de linhas
    for(r = 1; r <= numero; r++) {  // O laço começa de 1 até o numero
        
        // Laço de dentro pra mostrar os asteriscos conforme o numero da linha
        for(l = 1; l <= r; l++) {
            printf("*");
        }
        
        // desce pra linha de baixo depois de printf os asteriscos de cada linha
        printf("\n");
    }
    
    return 0;
}

4. Escrever um algoritmo que calcule e mostre a média aritmética dos números entre X e Y. Por exemplo, a média dos números entre X=2 e Y=6 é: (2 + 3 + 4 + 5 + 6) / 5 = 4. 

com while:
#include <stdio.h>

int main() {
    
    int contador, comecadaqui, terminaaqui,qtd;
    float media, soma= 0;
    printf("digite o primeiro numero do intervalo: ");
    scanf("%d", &comecadaqui);
    printf("digite o numero final do intervalo: ");
    scanf("%d", &terminaaqui);
    
    contador = comecadaqui;
    
    while(contador <= terminaaqui){
        soma += contador;
        contador++;
        
    }
    qtd = terminaaqui - comecadaqui + 1;
    media = soma / qtd;
    printf("A média dos números entre %d e %d é: %.2f\n", comecadaqui, terminaaqui, media);

    return 0;
}
    
    
    Com for:

#include <stdio.h>

int main() {
    int comecadaqui, terminaaqui, qtd;
    float media, soma = 0;

    printf("Digite o primeiro número do intervalo: ");
    scanf("%d", &comecadaqui);
    printf("Digite o número final do intervalo: ");
    scanf("%d", &terminaaqui);

  
    for (int contador = comecadaqui; contador <= terminaaqui; contador++) {
        soma += contador; 
}

    qtd = terminaaqui - comecadaqui + 1;  
    media = soma / qtd;  

    printf("A média dos números entre %d e %d é: %.2f\n", comecadaqui, terminaaqui, media);

    return 0;
}
